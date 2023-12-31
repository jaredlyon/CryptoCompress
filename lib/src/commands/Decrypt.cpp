//
// Created by Jared Lyon on 12/5/23.
//

#include <sodium/crypto_secretbox.h>
#include "../../include/commands/Decrypt.h"
#include <iostream>
#include <sodium/core.h>

/**
 * Initializes the decryption command object.
 * @param data the string data to decrypt
 * @param key the encryption key
 */
Decrypt::Decrypt(std::string data, std::string key) {
    this->data = data;
    this->key = key;
}

/**
 * Decrypts the data in this object.
 * @return the decrypted string
 */
std::string Decrypt::decryptData() {
    if (sodium_init() < 0) {
        std::cerr << "Error initializing libsodium!" << std::endl;
        return "";
    }

    std::string nonce = this->data.substr(0, crypto_secretbox_NONCEBYTES);

    std::string decryptedData(this->data.length() - crypto_secretbox_NONCEBYTES - crypto_secretbox_MACBYTES, 0);
    if (crypto_secretbox_open_easy(
            reinterpret_cast<unsigned char*>(&decryptedData[0]),
            reinterpret_cast<const unsigned char*>(this->data.c_str() + crypto_secretbox_NONCEBYTES),
            this->data.length() - crypto_secretbox_NONCEBYTES,
            reinterpret_cast<const unsigned char*>(nonce.c_str()),
            reinterpret_cast<const unsigned char*>(this->key.c_str())) != 0) {
        std::cerr << "Decryption failed!" << std::endl;
        return "";
    }

    std::cout << "Decryption successful!" << std::endl;
    return decryptedData;
}