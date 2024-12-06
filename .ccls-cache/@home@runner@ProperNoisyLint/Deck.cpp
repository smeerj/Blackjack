#include "Deck.h"
#include <iostream>

using namespace std;

Deck::Deck() {
    string cardNames[13]= {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

    char suits[4] = {'d', 'h', 'c', 's'};

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 13; j++) {
          Card* card;
          if(j >= 9) {
            card = new Card(cardNames[j], suits[i], 10);
          }
          else if (j == 0){
            card = new Card(cardNames[j], suits[i], 11);
          }
          else {
            card = new Card(cardNames[j], suits[i], j + 1);
          }
          Deck1.push_back(card);
        }
    }
}

void Deck::display() {
    Node* node = Deck1.getHead();
    while(node != nullptr) {
        cout << node->getCard()->toString();
        node = node->getNext();
    }
}

Card* Deck::draw()
{
  return Deck1.pop_back()->getCard();
}

void Deck::shuffle()
{
  Deck1.randomize();
}
