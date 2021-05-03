//  author: Charlotte Moreland
//  assignment: final group project

#include "directory.h"

void Directory::list_dir(const char *path) {
    
    struct dirent *entry;

    //  Directory is created from dirent.h library
    DIR *dir = opendir(path);
    if (dir == NULL) {
        return;
    }

    //  Reads in each file in the directory
    while ((entry = readdir(dir)) != NULL) {
        wavFile wav;

        //  error occuring 
        wav.readFile(entry->d_name);
    }

    //  closes the directory
    closedir(dir);
}

//  code rewritten from source code https://stackoverflow.com/questions/612097/how-can-i-get-the-list-of-files-in-a-directory-using-c-or-c