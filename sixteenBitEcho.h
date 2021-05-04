//Group PT52
//Wyatt Young
//Final Project

#ifdef SIXTEENBITECHO_H
#define SIXTEENBITECHO_H

#include "IProcessable.h"

class sixteenBitEcho : public IProcessable {


public:
    /**
     * @brief Takes in a buffer of any data type and creates an echo for that buffer.
     * 
     * @tparam T - Should be signed short to process 16 bit file.
     * @param buffer - Can be any data type pointer due to template. 
     * @param bufferSize - integer
     */

    template <typename T>

    void processBuffer(T *buffer, int bufferSize){
        float num;
        float delayNum;
        float echoLevel = 0.5f;
        float value;

        for(int i = 0; i < bufferSize - delay; i++){
            num = (float)(buffer[i] - ZERO);
            delayNum = (float)(buffer[i + delay] - ZERO);
            value = num * echoLevel + delayNum * SCALE_FACTOR + ZERO;
            buffer[n + delay] = (signed short)(round(value));
        }
         
    }


};

#endif //SIXTEENBITECHO_H