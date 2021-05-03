//  author: Charlotte Moreland
//  assignment: final group project

#include "metadata.h"

//  function to load metadata from the file given from directory/command line
void metadata::getMetadata(const std::string &fileName) {

    std::string tempstr;
    
    std::istringstream iss(fileName);

    //  wav to store metadata in
    wav_header wav;

    std::ifstream file(fileName,std::ios::binary | std::ios::in);

    if(file.is_open()){
        //  iterates through whole string stream
        while(!iss.eof()) {
            //  stores metadata in string stream into a temporary string
            iss >> tempstr;

            if(tempstr.find(".") == std::string::npos) {
                    //  to find title of the wav file
                    if(tempstr == "INAM" || tempstr == "inam") {

                        iss >> tempstr;

                        wav.title = tempstr;

                    }
                    //  to find the artist of the wav file
                    if(tempstr == "IART" || tempstr == "iart") {

                        iss >> tempstr;

                        wav.artist = tempstr;
                    }

            }

        file.close();

        } 

    }

}