//
// Created by Jared Lyon on 12/5/23.
//

#ifndef CRYPTOCOMPRESS_CONTROLLER_H
#define CRYPTOCOMPRESS_CONTROLLER_H

#include <string>

/**
 * Represents the controller interface.
 */
class Controller {
private:
    std::string data;
    std::string key;
    void genKey();
    void load();
    void save();
    void compress();
    void decompress();
    void encrypt();
    void decrypt();
public:
    Controller();
    void execute(std::string input);
};

#endif //CRYPTOCOMPRESS_CONTROLLER_H
