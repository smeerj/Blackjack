#include "Player.h"
#include <iostream>
using namespace std;

void Player::addCard(Card* card) {
    hand.push_back(card);
}

int Player::getScore() const {
    int score = 0;
    score += hand.at(0)->getValue();
  
    for (int i = 1; i < hand.size(); i++) {
      if (hand[i]->getName() == "A" && score >= 11) {
      score += 1;
      }
      else if (hand[i]->getName() == "A" && score < 11) {
        score += 11;
      }
      else
      {
        score += hand[i]->getValue();
      }
    }

  return score;
}

void Player::displayHand() const {
  for(int i = 0; i < hand.size(); i++) {
    std::cout << hand[i]->toString();
  }
}

bool Player::isBust() const {
    return getScore() > 21;
}
