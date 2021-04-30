//Group PT52
//Wyatt Young & Charlotte Moreland
//4/22/21

#ifndef WAVPROCESSOR_H
#define WAVPROCESSOR_H

#include <cstdint>
#include <cmath>

class IProcessable{

public:
    virtual void processBuffer(unsigned char* buffer, int bufferSize) = 0;

};


#endif //WAVPROCESSOR_H