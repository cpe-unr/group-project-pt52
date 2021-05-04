#ifndef USERINTER_H
#define USERINTER_H

#include <iostream>
#include "wavHeader.h"
#include "wavFile.h"
#include "IProcessable.h"

class UserInter {

public:

    static void directError();

    static void metaError();

    static void modMeta();

    static int chooseProcessor();

    static std::string fileName();

};

#endif //   USERINTER_H