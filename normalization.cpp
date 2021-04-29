#include "normalization.h"


const uint8_t ZERO = (uint8_t) 128;
const uint8_t LIMIT = (uint8_t) 102;
const uint8_t UPPER_LIMIT = ZERO + LIMIT;
const uint8_t LOWER_LIMIT = ZERO - LIMIT;

void Normalization::processBuffer(unsigned char *buffer, int bufferSize){
    for(int i = 0; n < bufferSize; i++){
        buffer[i] = buffer[i] > UPPER_LIMIT ? UPPER_LIMIT : buffer[i];
        buffer[i] = buffer[i] < LOWER_LIMIT ? LOWER_LIMIT : buffer[i];
    }
}