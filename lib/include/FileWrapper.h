//
// Created by Jared Lyon on 12/5/23.
//

#ifndef CRYPTOCOMPRESS_FILEWRAPPER_H
#define CRYPTOCOMPRESS_FILEWRAPPER_H
#include <string>

/**
 * Represents the FileWrapper (read/write IO stuff) interface.
 */
class FileWrapper {
public:
    FileWrapper();
    std::string read(std::string filepath);
    void write(std::string filepath, std::string input);
};

#endif //CRYPTOCOMPRESS_FILEWRAPPER_H
