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
    static void list_dir(const char *path);

};

#endif