//
// Created by nhoge on 07/12/2023.
//

#ifndef TEXTVENTURE_MESSAGE_H
#define TEXTVENTURE_MESSAGE_H

#include <cstdlib>
#include <string>
#include "vector"


class Message {

public:

    Message(int index = -1);

    //variables
    int i;


    std::string message;
    std::string option1;
    std::string option2;

    bool finalMessage = false;

    //pointers
    Message *nextMessageOption1;
    Message *nextMessageOption2;

    //functions
    int readFile();

    int printMessage();

    static int checkInput();

private:

    std::string guy = "Guy: ";
    std::string Option1 = "Option1: ";
    std::string Option2 = "Option2: ";

    std::vector<std::string> text;

};


#endif //TEXTVENTURE_MESSAGE_H
