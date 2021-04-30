//  author: Charlotte Moreland
//  assignment: final group project

#include "directory.h"

void Directory::list_dir(const char *path) {
    struct dirent *entry;
    DIR *dir = opendir(path);
    if (dir == NULL) {
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        wavFile wav;
        wav.readFile(entry->d_name);
        std::cout << wav.getBufferSize() << std::endl;
    }

    closedir(dir);
}

//  code rewritten from source code https://stackoverflow.com/questions/612097/how-can-i-get-the-list-of-files-in-a-directory-using-c-or-c