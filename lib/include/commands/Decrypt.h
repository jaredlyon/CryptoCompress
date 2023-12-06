//
// Created by Jared Lyon on 12/5/23.
//

#ifndef CRYPTOCOMPRESS_DECRYPT_H
#define CRYPTOCOMPRESS_DECRYPT_H

#include <string>

class Decrypt {
private:
    std::string data;
    std::string key;
public:
    Decrypt(std::string& data, std::string& key);
    std::string decryptData();
};

#endif //CRYPTOCOMPRESS_DECRYPT_H
