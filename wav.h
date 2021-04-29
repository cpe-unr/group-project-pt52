#ifndef WAV_H
#define WAV_H

#include "wavHeader.h"
#include <iostream>

class Wav{

private:
    unsigned char* buffer = NULL;
    wavHeader wav_header;
public:
    void readFile(const std::string &filename);
    void writeFile(const std::string &outFileName);

    virtual ~Wav();   

    unsigned char *getBuffer();
    int getBufferSize() const;


};

#endif //WAV_H