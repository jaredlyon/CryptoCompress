//
// Created by Jared Lyon on 12/5/23.
//

#ifndef CRYPTOCOMPRESS_CONTROLLER_H
#define CRYPTOCOMPRESS_CONTROLLER_H

#include <string>

class Controller {
public:
    Controller();
    void execute(std::string input);
private:
    std::string data;
    std::string key;
    void genKey();
};


#endif //CRYPTOCOMPRESS_CONTROLLER_H
