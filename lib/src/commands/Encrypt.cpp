//
// Created by Jared Lyon on 12/5/23.
//

#include <sodium/crypto_secretbox.h>
#include <sodium/randombytes.h>
#include "../../include/commands/Encrypt.h"
#include <iostream>
#include <sodium/core.h>

Encrypt::Encrypt(std::string data, std::string key) {
    this->data = data;
    this->key = key;
}

std::string Encrypt::encryptData() {
    if (sodium_init() < 0) {
        std::cerr << "Error initializing Libsodium" << std::endl;
        return "";
    }

    // Generate a random nonce
    std::string nonce(crypto_secretbox_NONCEBYTES, 0);
    randombytes_buf(reinterpret_cast<unsigned char*>(&nonce[0]), nonce.size());

    // Encrypt the message
    std::string ciphertext(this->data.length() + crypto_secretbox_MACBYTES, 0);
    if (crypto_secretbox_easy(
            reinterpret_cast<unsigned char*>(&ciphertext[0]),
            reinterpret_cast<const unsigned char*>(this->data.c_str()),
            this->data.length(),
            reinterpret_cast<const unsigned char*>(nonce.c_str()),
            reinterpret_cast<const unsigned char*>(this->key.c_str())) != 0) {
        std::cerr << "Encryption failed" << std::endl;
        return "";
    }

    // Combine the nonce and ciphertext
    return nonce + ciphertext;
}