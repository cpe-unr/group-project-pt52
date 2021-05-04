//Group PT52
//Wyatt Young
//Final Project

#ifndef SIXTEENBITECHO_H
#define SIXTEENBITECHO_H

#include "IProcessable.h"

class sixteenBitEcho : public IProcessable {


public:
    template <typename T>

    void processBuffer(T *buffer, int bufferSize){
        float num;
        float delayNum;
        float echoLevel = 0.5f;
        float value;

        for(int i = 0; i < bufferSize - delay; i++){
            num = (float)(buffer[i] - ZERO);
            delayNum = (float)(buffer[i + delay] - ZERO);
            value = num * echoLevel + delayNum * SCALE_FACTOR + ZERO;
            buffer[n + delay] = (signed short)(round(value));
        }
         
    }


};

#endif //SIXTEENBITECHO_H