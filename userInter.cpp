//  author: Charlotte Moreland
//  assignment: final group project

#include "userInter.h"

void UserInter::directError() {

    std::cout << "Please provide a directory\nFor example: ./wav directory" << std::endl;

}

void UserInter::metaError() {

    std::cout << "No metadata present" << std::endl;

}

void UserInter::modMeta() {

    std::string mod, choice, artistName, titleName, genreName;

    wav_header wav;

    std::cout << "Would you like to modify metadata?\nEx: yes or no" << std::endl;

    std::cin >> mod;

    if ( mod == "yes") {

        std::cout << "Would you like to modify artist, title, or genre" << std::endl;

        std::cin >> choice;

        if (choice == "artist") {

            std::cout << "Input new artist: ";

            std::cin >> artistName;

            wav.artist = artistName;

        }

        else if (choice == "title") {

            std::cout << "Input new title: ";

            std::cin >> titleName;

            wav.title = titleName;

        }

        else if (choice == "genre") {

            std::cout << "Input new genre: ";

            std::cin >> genreName;

            wav.genre = genreName;

        }
    }

    std::cout << wav.title << std::endl;
}