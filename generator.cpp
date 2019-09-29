#include <iostream>

#include "admd.h"

int main(int argc, char *argv[]) {

    if (argc == 1) {
        std::cout << "no input file" << std::endl;
        return 1;
    }

    if (argc > 2) {
        std::cout << "Filename is not correct, please make sure you use \" \" if you have spaces in the file name " << std::endl;
        return 2;
    }

    admd::bloggify(argv[1]);

    return 0;
}