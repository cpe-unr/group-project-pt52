//Group PT52
//Wyatt Young
//Final Project

#ifndef SIXTEENBITNOISEGATE_H
#define SIXTEENBITNOISEGATE_H

#include "IProcessable.h"

class sixteenBitNoiseGate : public IProcessable{

	uint8_t threshold; 


public:
    /**
     * @brief Takes in a buffer of any datatype and creates a noise gate to help filter out back ground noise for 16 bit files.
     * 
     * @tparam T - Should be signed short to process 16 bit file.
     * @param buffer - Can be any data type pointer due to template. 
     * @param bufferSize - integer
     */

	template <typename T>

	void processBuffer(T *buffer, int bufferSize){



		for(int i = 1; i < bufferSize; i++){
        	if(buffer[i] > (ZERO - threshold) && buffer[i] < (ZERO + threshold)){
    			buffer[i] = ZERO;
    		}
    	}
	}
    /**
     * @brief - Construct a new eight Bit Noise Gate object
     * 
     * @param threshold - uint16_t data type is the same as unsigned char
     */

	sixteenBitNoiseGate(uint16_t threshold);


};

#endif //SIXTEENBITNOISEGATE_H