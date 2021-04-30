//  author: Charlotte Moreland
//  assignment: final group project

//  Used and edited code from Programming Assignment 3

#include "wavFile.h"

void wavFile::readFile(const std::string &fileName) {
    std::ifstream file(fileName,std::ios::binary | std::ios::in);
    if(file.is_open()){
        file.read((char*)&wav_header, sizeof(wav_header));

        if(wav_header.bit_depth == 8) {
            buffer8 = new unsigned char[wav_header.data_bytes];
            file.read((char*)buffer8, wav_header.data_bytes);
        }
        else if(wav_header.bit_depth == 16) {
            buffer16 = new short[wav_header.data_bytes];
            file.read((char*)buffer16, wav_header.data_bytes);
        }

        file.close();
    }
}

void wavFile::writeFile(const std::string &outFileName) {
    std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);
    outFile.write((char*)&wav_header,sizeof(wav_header));
    

    if(wav_header.bit_depth == 8) {
        
    }
    else if(wav_header.bit_depth == 16) {
        outFile.write((char*)buffer16, wav_header.data_bytes);
    }

    outFile.close();
}

unsigned char *wavFile::getBuffer8(){
    return buffer8;
}

int wavFile::getBufferSize() const {
    return wav_header.data_bytes;
}

wavFile::~wavFile() {
    if(buffer8 != NULL) {
        delete[] buffer8;
    }
    else if(buffer16 != NULL) {
        delete[] buffer16;
    }
        
}