//
// Created by Jared Lyon on 12/5/23.
//

#include "../include/FileWrapper.h"
#include<fstream>
#include<sstream>
#include<string>

/**
 * Initializes a FileWrapper object for I/O purposes.
 */
FileWrapper::FileWrapper() {}

/**
 * Reads a file.
 * @param filepath the target filepath
 * @return the string data from the file
 */
std::string FileWrapper::read(std::string filepath) {
    std::ifstream f(filepath);
    std::string output;

    if (f) {
        std::ostringstream ss;
        ss << f.rdbuf();
        output = ss.str();
    }

    return output;
}

/**
 * Writes to a file.
 * @param filepath the target filepath
 * @param input the string data to be written
 */
void FileWrapper::write(std::string filepath, std::string input) {
    std::ofstream out(filepath);
    out << input;
    out.close();
}
