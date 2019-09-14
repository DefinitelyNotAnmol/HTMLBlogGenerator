#include <iostream>
#include <string>
#include <fstream>

#include "constants.h"

int main(int argc, char *argv[]) {

    if (argc != 2) {
        std::cout << "Please check filenames" << std::endl;
        return 1;
    }

    constants::blog blog = constants::generate(argv[1]);
    std::ofstream outfile;
    outfile.open(blog.STitle + ".html", std::ios::out | std::ios::trunc);
    outfile << blog.Data;
    outfile.close();
    return 0;
}

/*
    Save an file using tags mentioned below and save the file with extension .admd
    also keep all the images in the same directory as .admd file

    after running the program copy image folder to <blogName> folder to images/Blog folder of website
    copy <blogName>.html to static/blog folder in website
*/

/*
Title - Required
/Title
    Format for title
/

Short Title - Required
/STitle
    Short title 
/

Date - Required
/Date
    Feb 07, 2019
/
/Date Auto/  **This will generate automatic date, according to the date of compilation of the file**

Tag - Required
/Tag
    Design Resources, Adobe Illustrator
/

MainImage - Required [1200 x 800]
/MImage
    image.jpg
/

Image - Optional
/Image
    image.jpg
/

Paragraph - Optional
/Para
    This is the format for paragraph text
/

BlockQuote - Optional
/Block
    This is the block quote text
/

Bullets - Optional
/Bullets
    firstline
    second line
/

NumberedList - Optional
/List
    firstline
    secondline
/

Bold - Optional
/Bold
    line
/

External Links - Optional
/Link 
    <text>
    <link>
/

Author - Required
/Sign
    Anmol Jain
/
 */