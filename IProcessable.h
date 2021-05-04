//Group PT52
//Wyatt Young
//Final Project

#ifndef WAVPROCESSOR_H
#define WAVPROCESSOR_H

#include <cstdint>
#include <cmath>

class IProcessable{

public:
    /**
     * @brief Interface that processes the buffer.
     * 
     * @param buffer - unsigned char pointer
     * @param bufferSize - integer
     */

    virtual void processBuffer(unsigned char* buffer, int bufferSize) = 0;

};


#endif //WAVPROCESSOR_H