//  group: PT52
//  authors: Charlotte Moreland, Wyatt Young
//  assignment: final group project

/** @file */


/**
 * \brief   The function bar.
 *
 * \details This function does something which is doing nothing. So this text
 *          is totally senseless and you really do not need to read this,
 *          because this text is basically saying nothing.
 *
 * \note    This text shall only show you, how such a \"note\" section
 *          is looking. There is nothing which really needs your notice,
 *          so you do not really need to read this section.
 *
 * \param[in]     a    Description of parameter a.
 * \param[out]    b    Description of the parameter b.
 * \param[in,out] c    Description of the parameter c.
 *
 * \return        The error return code of the function.
 *
 * \retval        ERR_SUCCESS    The function is successfully executed
 * \retval        ERR_FAILURE    An error occurred
 */
void fn(){

}

#include <iostream>
#include "wavFile.h"
#include "directory.h"
#include "metadata.h"
#include "wavFile.h"
#include "wavHeader.h"
#include "userInter.h"
#include "echo.h"
#include "noiseGate.h"

int main(int argc, char** argv) {

    int i, choice;

    std::string proc;

    if(argc != 2) {
        UserInter::directError();
    }

    //  Seg fault when opening directory
    Directory::list_dir(argv[1]);

    UserInter::modMeta();

   choice = UserInter::chooseProcessor();

    for (i=0; i < choice; i++) {

        std::cout << "\nWhich processor would you like to use?\n(echo or normalization or noisegate)" << std::endl;
            
        std::cin >> proc;

        if(proc == "echo") {

            WavFile wav;
            wav.readFile(argv[1]);
            IProcessable *processor = new Echo();
            processor->processBuffer(wav.getBuffer(),wav.getBufferSize());
            wav.writeFile(argv[1]); 

            delete Echo();

        }
        if(proc == "normalization") {

            WavFile wav;
            wav.readFile(argv[1]);
            IProcessable *processor = new Normalization();
            processor->processBuffer(wav.getBuffer(),wav.getBufferSize());
            wav.writeFile(argv[1]); 

            delete Normalization();

        }
        if(proc == "noisegate") {

            WavFile wav;
            wav.readFile(argv[1]);
            IProcessable *processor = new NoiseGate();
            processor->processBuffer(wav.getBuffer(),wav.getBufferSize());
            wav.writeFile(argv[1]); 

            delete NoiseGate();

        }
            
    }

    //  couldn't get this to work with whole directory only single files
    UserInter::fileName() = argv[1];



    return 0;

}

