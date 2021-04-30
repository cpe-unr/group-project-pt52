//  author: Charlotte Moreland
//  assignment: final group project

//  Used code from Programming Assignment 3

#ifndef READFILE_H
#define READFILE_H

#include <iostream>
#include "fstream"
#include "wavHeader.h"
#include <dirent.h>

class wavFile {

private:

    wav_header wav_header;

    unsigned char* buffer8 = NULL;

    short* buffer16 = NULL;

public:

    void readFile(const std::string &fileName);

    void writeFile(const std::string &outFileName);

    virtual ~wavFile();

    unsigned char *getBuffer8();

    short *getBuffer16();

    int getBufferSize() const;

};

#endif
