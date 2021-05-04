//  author: Charlotte Moreland
//  assignment: final group project

#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <iostream>
#include <dirent.h>
#include <sys/types.h>
#include "wavFile.h"

class Directory {

public:

    /**
     * Take a directory and redirect files 
     * @param path - a constant char to store directory
     */
    static void list_dir(const char *path);

};

#endif