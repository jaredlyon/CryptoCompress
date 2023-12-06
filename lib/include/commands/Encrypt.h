//
// Created by Jared Lyon on 12/5/23.
//

#ifndef CRYPTOCOMPRESS_ENCRYPT_H
#define CRYPTOCOMPRESS_ENCRYPT_H

#include <string>

class Encrypt {
private:
    std::string data;
    std::string key;
public:
    Encrypt(std::string data, std::string key);
    std::string encryptData();
};

#endif //CRYPTOCOMPRESS_ENCRYPT_H
