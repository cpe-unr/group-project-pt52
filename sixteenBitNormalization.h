//Group PT52
//Wyatt Young
//Final Project


#ifndef SIXTEENBITNORMALIZATION_H
#define SIXTEENBITNORMALIZATION_H

#include "IProcessable.h"

class sixteenBitNormalization : public IProcessable {

public:
    /**
     * @brief - Takes in a buffer of any datatype and normalizes the buffer to make it louder.
     * 
     * @tparam T - Should be signed short to process 16 bit file.
     * @param buffer - Can be any data type pointer due to template.
     * @param bufferSize - integer
     */

    template <typename T>

   void processBuffer(T *buffer, int bufferSize) override{
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