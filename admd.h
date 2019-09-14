#ifndef ADMD_H
#define ADMD_H

namespace admd {
    struct blog {
        std::string STitle;
        std::string Data;
    };

    blog parser(std::string filename);
}

admd::blog admd::parser(std::string filename) {
    return admd::blog();
}

#endif //ADMD_H