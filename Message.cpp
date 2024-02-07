#include "Message.h"
#include <fstream>
#include <string>
#include <iostream>

int Message::printMessage() {

    if (i < 0) {
        throw std::exception("index not found");
    }

    int lineIndex = (i - 1) * 4;

    std::cout << guy << text[lineIndex] << std::endl;
    std::cout << Option1 << text[lineIndex + 1] << std::endl;
    std::cout << Option2 << text[lineIndex + 2] << std::endl;
    std::cout << "choose: ";

    int checkInput1 = checkInput();

    return i = checkInput1;
}

int Message::checkInput() {
    int input;
    do {
        std::cin >> input;

        if (input != 1 && input != 2) {
            std::cout << "improper input. choose:";
        }

        std::cout << std::endl;

    } while (input != 1 && input != 2);

    return input;
}

Message::Message(int index) {

    i = index;

    std::ifstream myfileRead("mainInput.txt");
    std::string line;

    if (myfileRead.is_open()) {

        while (myfileRead.good()) {

            std::getline(myfileRead, line);
            text.push_back(line);
        }
    }
}



