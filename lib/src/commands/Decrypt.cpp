//
// Created by Jared Lyon on 12/5/23.
//

#include <sodium/crypto_secretbox.h>
#include <sodium/randombytes.h>
#include "../../include/commands/Decrypt.h"
#include <iostream>
#include <sodium/core.h>

Decrypt::Decrypt(std::string& data, std::string& key) {
    this->data = data;
    this->key = key;
}

std::string Decrypt::decryptData() {
    if (sodium_init() < 0) {
        std::cerr << "libsodium encryption module failed to initialize" << std::endl;
    }

    if (this->key.length() != crypto_secretbox_KEYBYTES) {
        std::cerr << "Invalid key length" << std::endl;
    }

    unsigned char nonce[crypto_secretbox_NONCEBYTES];
    std::memcpy(nonce, this->data.c_str(), crypto_secretbox_NONCEBYTES);

    std::string decrypted_message(this->data.length() - crypto_secretbox_NONCEBYTES, 0);
    if (crypto_secretbox_open_easy(reinterpret_cast<unsigned char*>(&this->data[0]),
                                   reinterpret_cast<const unsigned char*>(this->data.c_str() + crypto_secretbox_NONCEBYTES),
                                   this->data.length() - crypto_secretbox_NONCEBYTES,
                                   nonce,
                                   reinterpret_cast<const unsigned char*>(this->key.c_str())) != 0) {
        std::cerr << "Decryption failed" << std::endl;
    }

    std::cout << "Decrypted the loaded data!" << std::endl;
    return decrypted_message;
}