//Group PT52
//Wyatt Young
//Final Project

#ifndef SIXTEENBITNOISEGATE_H
#define SIXTEENBITNOISEGATE_H

#include "IProcessable.h"

class sixteenBitNoiseGate : public IProcessable{

	uint8_t threshold; 


public:
	template <typename T>

	void processBuffer(T *buffer, int bufferSize){



		for(int i = 1; i < bufferSize; i++){
        	if(buffer[i] > (ZERO - threshold) && buffer[i] < (ZERO + threshold)){
    			buffer[i] = ZERO;
    		}
    	}
	}

	sixteenBitNoiseGate(uint8_t threshold);


};

#endif //SIXTEENBITNOISEGATE_H