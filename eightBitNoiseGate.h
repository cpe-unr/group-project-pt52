//Group PT52
//Wyatt Young
//Final Project

#ifndef EIGHTBITNOISEGATE_H
#define EIGHTBITNOISEGATE_H

#include "IProcessable.h"

class eightBitNoiseGate : public IProcessable{

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

	eightBitNoiseGate(uint8_t threshold);


};

#endif //EIGHTBITNOISEGATE_H