#include "Card.h"

Card::Card() {
  value = 0;
  suit = ' ';
  name = "";
}

Card::Card(string name, char suit, int val) {
  this->value = val;
  this->suit = suit;
  this->name = name;
}

Card::~Card() {}

void Card::setName(string s) { this->name = s; }

void Card::setSuit(char a) { this->suit = a; }

void Card::setVal(int i) { this->value = i; }

string Card::getName() { return this->name; }

int Card::getValue() const { return this->value; }

char Card::getSuit() { return this->suit; }

string Card::toString() const {
  string tempIcon;
  string tempName;
  if (this->suit == 's') {
    tempIcon = "\u2660";
  } else if (this->suit == 'h') {
    tempIcon = "\u2665";
  } else if (this->suit == 'd') {
    tempIcon = "\u2666";
  } else {
    tempIcon = "\u2663";
  }

  if (this->name == "10") {
    tempName = this->name;
  } else {
    tempName = this->name + " ";
  }

  return string("┌───────┐\n") + string("│") + tempName + string("     │\n") +
         string("│       │\n") + string("│   ") + tempIcon + string("   │\n") +
         string("│       │\n") + string("│     ") + tempName + string("│\n") +
         string("└───────┘\n");
}
