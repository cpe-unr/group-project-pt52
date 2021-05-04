//  author: Charlotte Moreland
//  assignment: final group project

#ifndef METADATA_H
#define METADATA_H

#include <iostream>
#include <fstream>
#include <sstream>
#include "wavHeader.h"
#include "userInter.h"

class metadata {

public:
    
    /**
     * Get metadata from files  
     * @param fileName - a fileName to extract metadata
     */
    void getMetadata(const std::string &fileName);

};

#endif  //METADATA_H