#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <vector>

class Player {
public:
    void addCard(Card* card);
    int getScore() const;
    void displayHand() const;
    bool isBust() const;

private:
    std::vector<Card*> hand;
};

#endif
