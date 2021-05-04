//  group: PT52
//  author: Charlotte Moreland
//  assignment: final group project

#ifndef CSVWRITER_H
#define CSVWRITER_H

#include <iostream>
#include <fstream>

class CSVWriter {

private:

    std::string out;

    std::string info1, info2, info3, info4;

public:

    /**
    * Write a CSV file from information from a file
    * @param out - a string to store file output
    * @param info1 - string storing information
    * @param info2 - string storing information
    * @param info3 - string storing information
    * @param info4 - string storing information
    */
    void outCSV(std::string out, std::string info1, std::string info2, std::string info3, std::string info4);

};

#endif