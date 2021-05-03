//  author: Charlotte Moreland
//  assignment: final group project

#ifndef METADATA_H
#define METADATA_H

#include <iostream>
#include <fstream>
#include <sstream>
#include "wavHeader.h"

class metadata {

public:
    
    void getMetadata(const std::string &fileName);

};

#endif  //METADATA_H