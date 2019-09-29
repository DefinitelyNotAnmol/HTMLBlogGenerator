#ifndef ADMD_H
#define ADMD_H

#include <vector>
#include <string>
#include <fstream>

namespace admd {
    class blog {
        std::string s_title;
        std::string s_data;
        std::vector<std::string> s_images;
    public:
        std::string title() const;
        std::string data() const;
        std::vector<std::string> images() const;
    };

    blog parser(const std::string& filename);
    bool bloggify(const std::string& filename);
}

std::string admd::blog::title() const {
    return s_title;
}

std::string admd::blog::data() const {
    return s_data;
}

std::vector<std::string> admd::blog::images() const {
    return s_images;
}

admd::blog admd::parser(const std::string& filename) {
    return admd::blog();
}

bool admd::bloggify(const std::string& filename) {

    admd::blog blog = admd::parser(filename);
    std::ofstream outfile;
    outfile.open(blog.title() + ".html", std::ios::out | std::ios::trunc);
    outfile << blog.data();
    outfile.close();


    return true;
}

#endif //ADMD_H