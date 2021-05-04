//  group: PT52
//  author: Charlotte Moreland
//  assignment: final group project

#ifndef USERINTER_H
#define USERINTER_H

#include <iostream>
#include "wavHeader.h"
#include "wavFile.h"
#include "IProcessable.h"

class UserInter {

public:

    /**
     * Prints an error code for misuse of directory 
     */
    static void directError();

    /**
     * Prints if there is no metadata 
     */
    static void metaError();

    /**
     * Take user input to modify existing metadata 
     */
    static void modMeta();

    /**
     * Allows a user to choose how many processors they wish to use
     * @return 
     */
    static int chooseProcessor();

    /**
     * Allows the user to change the fileName 
     * @return
     */
    static std::string fileName();

};

#endif //   USERINTER_H