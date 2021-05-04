//Group PT52
//Wyatt Young
//Final Project



#ifdef EIGHTBITECHO_H
#define EIGHTBITECHO_H

#include "IProcessable.h"

class eightBitEcho : public IProcessable {


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
            buffer[n + delay] = (unsigned char)(round(value));
        } 
    }
#endif //8BITECHO_H