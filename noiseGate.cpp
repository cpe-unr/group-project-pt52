#include "noiseGate.h"

const uint8_t ZERO = 128;

void NoiseGate::processBuffer(unsigned char *buffer, int bufferSize){
    for(int i = 1; i < bufferSize; i++){
        if(buffer[i] > (ZERO - threshold) && buffer[i] < (ZERO + threshold)){
            buffer[i] = ZERO;
        }
    }
}

NoiseGate::NoiseGate(uint8_t threshold) : threshold(threshold){

}