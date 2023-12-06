#include "lib/include/Controller.h"
#include <iostream>

using std::cout, std::cin, std::endl, std::string;
void help() {
    cout << "CryptoCompress CLI guide:" << endl;
    cout << "**Note that each function will request the necessary args**" << endl;
    cout << "-load : loads data from a file" << endl;
    cout << "-save : saves data to a file" << endl;
    cout << "-compress : compresses the loaded data" << endl;
    cout << "-decompress : decompresses the loaded data" << endl;
    cout << "-encrypt : encrypts the loaded data" << endl;
    cout << "-decrypt : decrypts the loaded data" << endl;
    cout << "-cryptocompress : compresses & encrypts the loaded data" << endl;
    cout << "-decryptodecompress : decrypts & decompresses the loaded data" << endl;
    cout << "-quit : quits CryptoCompress" << endl;
}

/**
 * Runs CryptoCompress.
 */
using std::cout, std::cin, std::endl, std::string;
int main() {
    cout << "   ___                            ___                                        \n"
            "  / (_)                          / (_)                                       \n"
            " |      ,_           _ _|_  __  |      __   _  _  _     _   ,_    _   ,   ,  \n"
            " |     /  |  |   | |/ \\_|  /  \\_|     /  \\_/ |/ |/ |  |/ \\_/  |  |/  / \\_/ \\_\n"
            "  \\___/   |_/ \\_/|/|__/ |_/\\__/  \\___/\\__/   |  |  |_/|__/    |_/|__/ \\/  \\/ \n"
            "                /|/|                                 /|                      \n"
            "                \\|\\|                                 \\|                      " << endl;
    cout << "Welcome to CryptoCompress v1.0.0\nUse '-help' for help." << endl;
    cout << "CryptoCompress is a C++ program that uses" << endl;
    cout << "Google's brotli architecture to compress files" << endl;
    cout << "and libsodium to encrypt them." << endl;

    bool running = true;
    string input = "";
    Controller controller;

    while (running) {
        cin >> input;

        if (input == "-help") {
            help();
        } else if (input == "-quit") {
            cout << "                       _              \n"
                    "   () |             | | |            |\n"
                    "   /\\/| __   __   __| | |         _  |\n"
                    "  /   |/  \\_/  \\_/  | |/ \\_|   | |/  |\n"
                    " /(__/ \\__/ \\__/ \\_/|_/\\_/  \\_/|/|__/o\n"
                    "                              /|      \n"
                    "                              \\|      " << endl;
            running = false;
        } else {
            controller.execute(input);
        }
    }
}