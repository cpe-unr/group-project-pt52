//  author: Charlotte Moreland
//  assignment: final group project

//  Used code from Programming Assignment 3

#ifndef WAVFILE_H
#define WAVFILE_H

#include <iostream>
#include <fstream>
#include "wavHeader.h"
#include <dirent.h>

class wavFile {

private:

    wav_header wav_header;

    unsigned char* buffer = NULL;

    short* shortBuffer = NULL;

public:

    void readFile(const std::string &fileName);

    void writeFile(const std::string &outFileName);

    virtual ~wavFile();

    unsigned char *getBuffer();

    short *getShortBuffer();

    int getBufferSize() const;

};

#endif  //  WAVFILE_H
