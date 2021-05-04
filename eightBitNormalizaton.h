//Group PT52
//Wyatt Young
//Final Project


#ifndef EIGHTBITNORMALIZATION_H
#define EIGHTBITNORMALIZATION_H

#include "IProcessable.h"

class eightBitNormalization : public IProcessable {

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
            x = 255 / max;
            buffer[i] * x;
        }
        
   }


};

#endif //EIGHTBITNORMALIZATION_H