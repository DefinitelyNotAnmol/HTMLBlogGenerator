#ifndef ADMD_H
#define ADMD_H

#include <vector>
#include <string>
#include <fstream>

namespace admd {
    struct blog {
        std::string s_title;
        std::string s_data;
        std::vector<std::string> s_images;
    };

    blog parser(std::string filename);
}

admd::blog admd::parser(std::string filename) {
    return admd::blog();
}

#endif //ADMD_H