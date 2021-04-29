//  author: Charlotte Moreland
//  assignment: final group project

//  Used code from Programming Assignment 3

#include "wavFile.h"

void wavFile::readFile(const std::string &fileName) {
    std::ifstream file(fileName,std::ios::binary | std::ios::in);
    if(file.is_open()){
        file.read((char*)&wav_header, sizeof(wav_header));
        buffer = new signed short[wav_header.data_bytes];
        file.read((char*)buffer, wav_header.data_bytes);
        file.close();
    }
}

void wavFile::writeFile(const std::string &outFileName) {
    std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);
    outFile.write((char*)&wav_header,sizeof(wav_header));
    outFile.write((char*)buffer, wav_header.data_bytes);
    outFile.close();
}

signed short *wavFile::getBuffer(){
    return buffer;
}

int wavFile::getBufferSize() const {
    return wav_header.data_bytes;
}

wavFile::~wavFile() {
    if(buffer != NULL)
        delete[] buffer;
}