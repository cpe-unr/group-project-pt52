//  author: Charlotte Moreland
//  assignment: final group project

//  Used code from Programming Assignment 3

#ifndef READFILE_H
#define READFILE_H

#include <iostream>
#include "fstream"
#include "wavHeader.h"

class wavFile {

private:

    wav_header wav_header;

    signed short* buffer = NULL;

public:

    void readFile(const std::string &fileName);

    void writeFile(const std::string &outFileName);

    virtual ~wavFile();

    signed short *getBuffer();

    int getBufferSize() const;

};

#endif
