//Group PT52
//Wyatt Young
//Final Project

#ifndef EIGHTBITNOISEGATE_H
#define EIGHTBITNOISEGATE_H

#include "IProcessable.h"

class eightBitNoiseGate : public IProcessable{

	uint8_t threshold; 


public:
    /**
     * @brief Takes in a buffer of any datatype and creates a noise gate to help filter out back ground noise for 8 bit files.
     * 
     * @tparam T - Should be unsigned char to process 8 bit file.
     * @param buffer - Can be any data type pointer due to template. 
     * @param bufferSize - integer
     */

	template <typename T>

	void processBuffer(T *buffer, int bufferSize) override{

		for(int i = 1; i < bufferSize; i++){
        	if(buffer[i] > (ZERO - threshold) && buffer[i] < (ZERO + threshold)){
        		buffer[i] = ZERO;
        	}
    	}

	}

    /**
     * @brief - Construct a new eight Bit Noise Gate object
     * 
     * @param threshold - uint8_t data type is the same as unsigned char
     */

	eightBitNoiseGate(uint8_t threshold);


};

#endif //EIGHTBITNOISEGATE_H