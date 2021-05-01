#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "IProcessable.h"

class NoiseGate : IProcessable{

	uint8_t threshold; 


public:

	void processBuffer(unsigned char *buffer, int bufferSize);

	NoiseGate(uint8_t threshold);


};

#endif
