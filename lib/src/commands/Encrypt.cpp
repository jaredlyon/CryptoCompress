//
// Created by Jared Lyon on 12/5/23.
//

#include <sodium/crypto_secretbox.h>
#include <sodium/randombytes.h>
#include "../../include/commands/Encrypt.h"
#include <iostream>
#include <sodium/core.h>

Encrypt::Encrypt(std::string& data, std::string& key) {
    this->data = data;
    this->key = key;
}

std::string Encrypt::encryptData() {
    if (sodium_init() < 0) {
        std::cerr << "libsodium encryption module failed to initialize" << std::endl;
    }

    if (this->key.length() != crypto_secretbox_KEYBYTES) {
        std::cerr << "Invalid key length" << std::endl;
    }

    unsigned char nonce[crypto_secretbox_NONCEBYTES];
    randombytes_buf(nonce, sizeof(nonce));

    std::string ciphertext(crypto_secretbox_MACBYTES + this->data.length(), 0);
    if (crypto_secretbox_easy(reinterpret_cast<unsigned char*>(&ciphertext[0]),
                              reinterpret_cast<const unsigned char*>(this->data.c_str()),
                              this->data.length(),
                              nonce,
                              reinterpret_cast<const unsigned char*>(this->key.c_str())) != 0) {
        std::cerr << "Encryption failed" << std::endl;
    }

    // Combine the nonce and ciphertext
    std::string encrypted_message(reinterpret_cast<const char*>(nonce), crypto_secretbox_NONCEBYTES);
    encrypted_message += ciphertext;

    std::cout << "Encrypted the loaded data!" << std::endl;
    return encrypted_message;
}