//  author: Charlotte Moreland
//  assignment: final group project

#ifndef CSVWRITER_H
#define CSVWRITER_H

#include <iostream>

class CSVWriter {

private:

    std::string out;

    std::string info1, info2, info3, info4;

public:

    void outCSV(std::string out, std::string info1, std::string info2, std::string info3, std::string info4);

};

#endif