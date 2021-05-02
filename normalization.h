#ifndef NORMALIZATION_H
#define NORMALIZATION_H

#include "IProcessable.h"

class Normalization : IProcessable {

public:
    template <typename T>

   void processBuffer(T buffer, int bufferSize);


};

#endif