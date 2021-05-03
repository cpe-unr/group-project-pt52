#ifndef NORMALIZATION_H
#define NORMALIZATION_H

#include "IProcessable.h"

class Normalization : IProcessable {

public:
    template <typename T>

   void processBuffer(T buffer, int bufferSize){
        string max = buffer[0];
        int x;

        if(typeid(T) == typeid(unsigned char)){

            for(int i = 1; i < bufferSize; i++){
                if(max.size() < buffer[i].size()){
                    max = buffer[i];

                }


            }

            for(i = 0; i < bufferSize; i++){
                x = 128 / max;

                buffer[i] * x;
            }
        }

        if(typeid(T) == typeid(signed short)){

            for(int i = 1; i < bufferSize; i++){
                if(max.size() < buffer[i].size()){
                    max = buffer[i];

                }


            }

            for(i = 0; i < bufferSize; i++){
                x = 16384 / max;

                buffer[i] * x;
            }
        }
   }


};

#endif