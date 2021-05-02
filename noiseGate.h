#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "IProcessable.h"

class NoiseGate : IProcessable{

	uint8_t threshold; 


public:
	template <typename T>

	void processBuffer(T buffer, int bufferSize);

	NoiseGate(uint8_t threshold);


};

#endif
