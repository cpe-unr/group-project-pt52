//  author: Charlotte Moreland
//  assignment: final group project

//  Used code from Programming Assignment 3

#ifndef WAVFILE_H
#define WAVFILE_H

#include <iostream>
#include <fstream>
#include "wavHeader.h"
#include <dirent.h>

class WavFile {

private:

    wav_header wav_header;

    unsigned char* buffer = NULL;

    short* shortBuffer = NULL;

public:

    /**
     * Reads a file and stores data in a buffer 
     * @param fileName - string to store fileName
     */
    void readFile(const std::string &fileName);

    /**
     * Writes over file with new information stored 
     * @param outFileName - a string to store the new file
     */
    void writeFile(const std::string &outFileName);

    /**
     * destroy the buffers if they still hold data
     */
    virtual ~WavFile();

    /**
     * Get buffer 
     * @return
     */
    unsigned char *getBuffer();

    /**
     * Get buffer from 16 bit wav file 
     * @return
     */
    short *getShortBuffer();

    /**
     * Get the size of the buffer 
     * @return
     */
    int getBufferSize() const;

};

#endif  //  WAVFILE_H
