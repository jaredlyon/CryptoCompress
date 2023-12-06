//
// Created by Jared Lyon on 12/5/23.
//

#include "../include/Controller.h"
#include "../include/FileWrapper.h"
#include "../brotli/brotli_wrapper.h"
#include "../include/commands/Encrypt.h"
#include "../include/commands/Decrypt.h"

#include <iostream>
#include <sodium/crypto_secretbox.h>
#include <sodium/randombytes.h>

/**
 * Initializes the controller object for this tool.
 */
Controller::Controller() {
    this->data = "";
    this->key = "";
}

/**
 * Executes CLI arguments received by main.cpp.
 */
using std::cout, std::cin, std::endl, std::string;
void Controller::execute(std::string input) {
    if (input == "-load") {
        this->load();
    } else if (input == "-save") {
        this->save();
    } else if (input == "-compress") {
        this->compress();
    } else if (input == "-decompress") {
        this->decompress();
    } else if (input == "-encrypt") {
        this->encrypt();
    } else if (input == "-decrypt") {
        this->decrypt();
    } else if (input == "-cryptocompress") {
        this->compress();
        this->encrypt();
    } else if (input == "-decryptodecompress") {
        this->decrypt();
        this->decompress();
    } else {
        cout << "Unknown command!\nsee -help" << endl;
    }
}

/**
 * Generates a random key using libsodium's secretbox module.
 */
void Controller::genKey() {
    std::string key(crypto_secretbox_KEYBYTES, 0);
    randombytes_buf(reinterpret_cast<unsigned char*>(&key[0]), key.size());
    this->key = key;
}

/**
 * Loads data into this object from a user-specified filepath.
 */
void Controller::load() {
    FileWrapper load;
    string filepath = "";
    cout << "Enter filepath:" << endl;
    cin >> filepath;
    this->data = load.read(filepath);
    if (this->data.empty()) {
        std::cerr << "Failed to load data!" << endl;
    } else {
        cout << "Data loaded!" << endl;
    }
}

/**
 * Saves data from this object into a user-specified filepath.
 */
void Controller::save() {
    FileWrapper save;
    string filepath = "";
    cout << "Enter filepath:" << endl;
    cin >> filepath;
    save.write(filepath, this->data);
    cout << "Data saved to " + filepath << endl;
}

/**
 * Compresses the data in this object.
 */
void Controller::compress(){
    std::string compressed;
    compressed = brotli::compress(this->data);
    this->data = compressed;
    cout << "Compressed the loaded data!" << endl;
}

/**
 * Decompresses the data in this object.
 */
void Controller::decompress() {
    std::string decompressed;
    decompressed = brotli::decompress(this->data);
    this->data = decompressed;
    cout << "Decompressed the loaded data!" << endl;
}

/**
 * Encrypts the data in this object.
 */
void Controller::encrypt() {
    this->genKey();
    cout << "Your key is:" << endl;
    cout << this->key << endl;

    FileWrapper keySave;
    string filepath = "";
    cout << "Enter filepath to save key:" << endl;
    cin >> filepath;
    keySave.write(filepath, key);
    cout << "Key saved to " + filepath << endl;

    cout << "Please save this key for later decryption." << endl;
    Encrypt encrypt(this->data, this->key);
    this->data = encrypt.encryptData();
}

/**
 * Decrypts the data in this object.
 */
void Controller::decrypt() {
    FileWrapper loadKey;
    cout << "Enter your key filepath:" << endl;
    string filepath = "";
    cin >> filepath;
    this->key = loadKey.read(filepath);
    if (this->data.empty()) {
        std::cerr << "Failed to load data!" << endl;
    } else {
        cout << "Data loaded!" << endl;
    }

    Decrypt decrypt(this->data, this->key);
    this->data = decrypt.decryptData();
}