/*
#include "normalization.h"

using namespace std;


void Normalization::processBuffer(unsigned char *buffer, int bufferSize){
    string max = buffer[0];
    int x;

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
*/