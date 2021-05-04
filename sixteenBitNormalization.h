//Group PT52
//Wyatt Young
//Final Project


#ifndef SIXTEENBITNORMALIZATION_H
#define SIXTEENBITNORMALIZATION_H

#include "IProcessable.h"

class sixteenBitNormalization : public IProcessable {

public:
    template <typename T>

   void processBuffer(T *buffer, int bufferSize){
        string max = buffer[0];
        int x;
        
        for(int i = 1; i < bufferSize; i++){
            if(max.size() < buffer[i].size()){
                max = buffer[i];
            }
        }

        for(i = 0; i < bufferSize; i++){
            x = 32767 / max;
            buffer[i] * x;
        }
        
   }


};

#endif //SIXTEENBITNORMALIZATION_H