#include "Game.h"
#include <iostream>
using namespace std;

Game::Game() {}

void Game::play() {
    Deck* deck2 = new Deck();
    this->deck = deck2;

    srand(time(0));

    int randomNumOfTimes = rand() % (20 + 1 - 10) + 10;

    for (int i = 0; i < randomNumOfTimes; i++) {
      deck->shuffle();
    }
  
    player.addCard(deck->draw());
    dealer.addCard(deck->draw());
    player.addCard(deck->draw());
    dealer.addCard(deck->draw());

    // Player's turn
    displayTable();
    if(player.getScore() == 21) {
      cout << "Blackjack! You win!" << endl;
    }
    else if(dealer.getScore() == 21) { 
      cout << "You Lose!" << endl;
    }
    else {
      playerTurn();
      if (!player.isBust()) {
          dealerTurn();
      determineWinner();

      }
    }
}

void Game::displayTable() const {
    cout << "Player's hand:" << endl;
    player.displayHand();
    cout << "Player's score: " << player.getScore() << endl << endl;

    cout << "Dealer's hand:" << endl;
    dealer.displayHand();
    cout << "Dealer's score: " << dealer.getScore() << endl << endl;
}

void Game::playerTurn() {
    char choice;

    while (true) {
        cout << "Do you want to hit (h) or stand (s)? ";
        cin >> choice;

        if (choice == 'h') {
            player.addCard(deck->draw());
            displayTable();

            if (player.isBust()) {
                cout << "Bust! You lose." << endl;
                return;
            }
            else if (player.getScore() == 21)
            {
              cout << "Blackjack! You win!" << endl;
              this->state = false;
              return;
            }
          
        } else if (choice == 's') {
            return;
        } else {
            cout << "Invalid choice. Please enter 'h' or 's'." << endl;
        }
    }
}

void Game::dealerTurn() {
    while (dealer.getScore() < 17) {
        dealer.addCard(deck->draw());
    }

    displayTable();
}

void Game::determineWinner() const {
    if (player.getScore() == 21){
      cout << "Blackjack! You win!" << endl;
    }
    else if (dealer.getScore() == 21){
      cout << "You lose!" << endl;
    }
    else if (player.isBust()) {
        cout << "You lose!" << endl;
    } else if (dealer.isBust() || player.getScore() > dealer.getScore()) {
        cout << "You win!" << endl;
    } else if (player.getScore() == dealer.getScore()) {
        cout << "It's a tie!" << endl;
    } else {
        cout << "You lose!" << endl;
    }
}
