#ifndef DECK_H
#define DECK_H

#include "LinkedList.h"

class Deck
{
private:
    LinkedList Deck1;
public:
    Deck();
    Card* draw();
    void shuffle();
    void display();
};

#endif 