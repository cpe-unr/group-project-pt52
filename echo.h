#ifdef ECHO_H
#define ECHO_H

#include "IProcessable.h"

class Echo : IProcessable {


public:
    template <typename T>

    void processBuffer(T buffer, int bufferSize){
        float num;
        float delayNum;
        float echoLevel = 0.5f;
        float value;

        if(typeid(T) == typeid(unsigned char)){

            for(int i = 0; i < bufferSize - delay; i++){
                num = (float)(buffer[i] - ZERO);
                delayNum = (float)(buffer[i + delay] - ZERO);
                value = num * echoLevel + delayNum * SCALE_FACTOR + ZERO;
                buffer[n + delay] = (unsigned char)(round(value));
            }
        }    

        if(typeid(T) == typeid(signed short)){

            for(int i = 0; i < bufferSize - delay; i++){
                num = (float)(buffer[i] - ZERO);
                delayNum = (float)(buffer[i + delay] - ZERO);
                value = num * echoLevel + delayNum * SCALE_FACTOR + ZERO;
                buffer[n + delay] = (signed short)(round(value));
            }
        } 
    }


};

#endif