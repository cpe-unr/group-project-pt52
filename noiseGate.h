#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "IProcessable.h"

class NoiseGate : IProcessable{

	uint8_t threshold; 


public:
	template <typename T>

	void processBuffer(T buffer, int bufferSize){

		if(typeid(T) == typeid(unsigned char)){

			for(int i = 1; i < bufferSize; i++){
        		if(buffer[i] > (ZERO - threshold) && buffer[i] < (ZERO + threshold)){
        			buffer[i] = ZERO;
        		}
    		}
		}

				if(typeid(T) == typeid(signed short)){

			for(int i = 1; i < bufferSize; i++){
        		if(buffer[i] > (ZERO - threshold) && buffer[i] < (ZERO + threshold)){
        			buffer[i] = ZERO;
        		}
    		}
		}
	}

	NoiseGate(uint8_t threshold);


};

#endif
