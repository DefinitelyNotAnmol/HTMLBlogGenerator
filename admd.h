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

    blog parser(const std::string& filename);
    bool bloggify(const std::string& filename);
}

admd::blog admd::parser(const std::string& filename) {
    return admd::blog();
}

bool admd::bloggify(const std::string& filename) {
    
    admd::blog blog = admd::parser(filename);
    std::ofstream outfile;
    outfile.open(blog.s_title + ".html", std::ios::out | std::ios::trunc);
    outfile << blog.s_data;
    outfile.close();


    return true;
}

#endif //ADMD_H