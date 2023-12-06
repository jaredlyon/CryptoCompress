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

Controller::Controller() {
    this->data = "";
    this->key = "";
}

using std::cout, std::cin, std::endl, std::string;
void Controller::execute(std::string input) {
    if (input == "-load") {
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
    } else if (input == "-save") {
        FileWrapper save;
        string filepath = "";
        cout << "Enter filepath:" << endl;
        cin >> filepath;
        save.write(filepath, this->data);
        cout << "Data saved to " + filepath << endl;
    } else if (input == "-compress") {
        std::string compressed;
        compressed = brotli::compress(this->data);
        this->data = compressed;
        cout << "Compressed the loaded data!" << endl;
    } else if (input == "-decompress") {
        std::string decompressed;
        decompressed = brotli::decompress(this->data);
        this->data = decompressed;
        cout << "Decompressed the loaded data!" << endl;
    } else if (input == "-encrypt") {
        std::string key(crypto_secretbox_KEYBYTES, 0);
        randombytes_buf(reinterpret_cast<unsigned char*>(&key[0]), crypto_secretbox_KEYBYTES);
        this->key = key;
        cout << "Your key is:" << endl;
        cout << key << endl;

        FileWrapper keySave;
        string filepath = "";
        cout << "Enter filepath to save key:" << endl;
        cin >> filepath;
        keySave.write(filepath, key);
        cout << "Key saved to " + filepath << endl;

        cout << "Please save this key for later decryption." << endl;
        Encrypt encrypt(this->data, this->key);
        this->data = encrypt.encryptData();
    } else if (input == "-decrypt") {
        cout << "Enter your key for decryption:" << endl;
        cin >> this->key;
        Decrypt decrypt(this->data, this->key);
        this->data = decrypt.decryptData();
    }
}