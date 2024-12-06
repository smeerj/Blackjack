#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "Player.h"

class Game {
public:
    Game();
    void play();

private:
    Deck* deck;
    Player player;
    Player dealer;
    bool state;

    void displayTable() const;
    void playerTurn();
    void dealerTurn();
    void determineWinner() const;
};

#endif
