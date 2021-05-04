//  author: Charlotte Moreland
//  assignment: final group project

#include "CSVWriter.h"


void CSVWriter::outCSV(std::string out, std::string info1, std::string info2, std::string info3, std::string info4) {

    //  output of file object
    out = out + ".csv";

    std::ofstream file(out);

    //  data is taken and sent into the stream
    file << ",Artist,Track,Album,Data,Genre,Track Number,Comments,";
    file << std::endl;
    file << info1;
    file << std::endl;
    file << info2;
    file << std::endl;
    file << info3;
    file << std::endl;
    file << info4;

    file.close();

}