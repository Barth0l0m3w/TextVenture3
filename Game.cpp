//
// Created by nhoge on 07/12/2023.
//

#include "Game.h"
#include <iostream>
#include "Message.h"
#include <fstream>

void Game::Start( ) {

    Message currentMessage;

    Message m1(1);

    Message m2(2);

    Message m3(3);

    Message m4(4);

    Message m5(5);

    Message m6(6);

    Message m7(7);

    Message m8(8);

    Message m9(9);

    m1.nextMessageOption1 = &m2;
    m1.nextMessageOption2 = &m3;

    m2.nextMessageOption1 = &m4;
    m2.nextMessageOption2 = &m5;

    m3.nextMessageOption1 = &m6;
    m3.nextMessageOption2 = &m7;

    m4.nextMessageOption1 = &m8;
    m4.nextMessageOption2 = &m9;

    currentMessage = m1;//where the story begins

    //todo: make a thing so the loop knows what the final message is.
    while (!currentMessage.finalMessage) {

        int i = currentMessage.printMessage();
        if (i == 1) {
            currentMessage = *currentMessage.nextMessageOption1;
        } else if (i == 2) {
            currentMessage = *currentMessage.nextMessageOption2;
        }
    }
}