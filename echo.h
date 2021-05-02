#ifdef ECHO_H
#define ECHO_H

#include "IProcessable.h"

class Echo : IProcessable {


public:
    template <typename T>

    void processBuffer(T buffer, int bufferSize);


};

#endif