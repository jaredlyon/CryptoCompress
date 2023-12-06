//
// Created by Jared Lyon on 12/5/23.
//

#include "../include/FileWrapper.h"
#include<fstream>
#include<sstream>
#include<string>

FileWrapper::FileWrapper() {

}

std::string FileWrapper::read(std::string filepath) {
    std::ifstream f(filepath);
    std::string output;

    if (f) {
        std::ostringstream ss;
        ss << f.rdbuf(); // reading data
        output = ss.str();
    }

    return output;
}

void FileWrapper::write(std::string filepath, std::string input) {
    std::ofstream out(filepath);
    out << input;
    out.close();
}
