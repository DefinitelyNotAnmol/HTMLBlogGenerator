#include <iostream>

#include "admd.h"

int main(int argc, char *argv[]) {

    if (argc != 2) {
        std::cout << "Please check filenames" << std::endl;
        return 1;
    }

    admd::bloggify(argv[1]);
    return 0;
}