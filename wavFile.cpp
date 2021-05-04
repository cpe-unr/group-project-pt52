//  author: Charlotte Moreland
//  assignment: final group project

//  Used and edited code from Programming Assignment 3

#include "wavFile.h"

void WavFile::readFile(const std::string &fileName) {

    std::ifstream file(fileName,std::ios::binary | std::ios::in);

    if(file.is_open()){

        file.read((char*)&wav_header, sizeof(wav_header));

        buffer = new unsigned char[wav_header.data_bytes];

        file.read((char*)buffer, wav_header.data_bytes);

        file.close();
    }

}

void WavFile::writeFile(const std::string &outFileName) {

    std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);

    outFile.write((char*)&wav_header,sizeof(wav_header));

    outFile.write((char*)buffer, wav_header.data_bytes);

    outFile.close();

}

unsigned char *WavFile::getBuffer(){

    return buffer;

}

short *WavFile::getShortBuffer() {
    //  16 bit buffer is cast into a short rather than an unsigned char
    short* shortBuffer = reinterpret_cast<short*>(buffer);

    return shortBuffer;

}

int WavFile::getBufferSize() const {

    return wav_header.data_bytes;

}

//  deconstructor deletes buffer
WavFile::~WavFile() {

    if(buffer != NULL) {

        delete[] buffer;

    }
    else if(shortBuffer != NULL) {

        delete[] shortBuffer;

    }  
}