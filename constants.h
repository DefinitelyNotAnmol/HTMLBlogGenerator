#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace constants {
    struct blog {
        std::string STitle;
        std::string Data;
    };

    blog generate(std::string filename);
}

constants::blog constants::generate(std::string filename) {
    return constants::blog();
}

#endif