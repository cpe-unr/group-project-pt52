#include "echo.h"
#include <iostream>

void Echo::processBuffer(unsigned char *buffer, int bufferSize){
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

void Echo::processBuffer(signed short *buffer, int bufferSize){
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