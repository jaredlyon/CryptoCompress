#include "lib/brotli/brotli_wrapper.h"
#include "lib/include/Controller.h"
#include <iostream>

using std::cout, std::cin, std::endl, std::string;
int main() {
//    if (hydro_init() != 0) {
//        abort();
//    }
//
//    std::string origin = "hello world!";
//    std::string compressed = brotli::compress(origin);
//    std::string decompressed = brotli::decompress(compressed);
//    std::cout << std::boolalpha << (origin == decompressed);

//    uint8_t k[hydro_hash_KEYBYTES];
//    uint8_t h1[hydro_hash_BYTES], h2[hydro_hash_BYTES];
//
//    hydro_hash_keygen(k);
//    hydro_hash_hash(h1, "test", 4, "context1", k);
//    hydro_hash_hash(h2, "test", 4, "context2", k);
///* h1 != h2 even if the key and input are the same */

    cout << "   ___                            ___                                        \n"
            "  / (_)                          / (_)                                       \n"
            " |      ,_           _ _|_  __  |      __   _  _  _     _   ,_    _   ,   ,  \n"
            " |     /  |  |   | |/ \\_|  /  \\_|     /  \\_/ |/ |/ |  |/ \\_/  |  |/  / \\_/ \\_\n"
            "  \\___/   |_/ \\_/|/|__/ |_/\\__/  \\___/\\__/   |  |  |_/|__/    |_/|__/ \\/  \\/ \n"
            "                /|/|                                 /|                      \n"
            "                \\|\\|                                 \\|                      " << endl;
    cout << "Welcome to CryptoCompress v1.0.0\nUse '-help' for help." << endl;
    cout << "CryptoCompress is a C++ program that uses Google's brotli architecture to compress files" << endl;
    cout << "and libhydrogen to encrypt them." << endl;

    bool running = true;
    string input = "";
    Controller controller;

    while (running) {
        cin >> input;

        if (input == "-help") {
            cout << "CryptoCompress CLI guide:" << endl;
            cout << "**Note that each function will request the necessary args**" << endl;
            cout << "-load : loads data from a file" << endl;
            cout << "-save : saves data to a file" << endl;
            cout << "-encryptcompress : encrypts and compresses the loaded data" << endl;
            cout << "-decryptdecompress : decrypts and uncompresses the loaded data" << endl;
            cout << "-compress : compresses the loaded data" << endl;
            cout << "-decompress : decompresses the loaded data" << endl;
            cout << "-encrypt : encrypts the loaded data" << endl;
            cout << "-decrypt : decrypts the loaded data" << endl;
            cout << "-quit : quits this program" << endl;
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