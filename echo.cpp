
#include "echo.h"
#include <iostream>

void Echo::processBuffer(unsigned char *buffer, int bufferSize){
    float num;
    float delayNum;
    float echoLevel = 0.5f;
    float value;
    int ZERO = 0;

    for(float i = 0; i < bufferSize - delayNum; i++){
        num = (float)(buffer[i] - ZERO);
        delayNum = (float)(buffer[i + delayNum] - ZERO);
        value = num * echoLevel + delayNum * SCALE_FACTOR + ZERO;
        buffer[num + delayNum] = (unsigned char)(round(value));
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

