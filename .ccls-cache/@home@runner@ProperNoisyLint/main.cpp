/********************************************************************************
 *		21
 *		author(s): Deven Young, Arjun Bhagat, Kenneth Wen, Derrick Rose
 *		citations:
 *
 *		goal: 
 *
 *
 *
 ********************************************************************************/

#include <iostream> 
#include <string>
#include "Deck.h"
#include "Game.h"

using namespace std;

int main() 
{ 
    char playAgain;

    do {
        Game game;
        game.play();

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain != 'n' || playAgain == 'N');

    cout << "Thanks for playing! Goodbye." << endl;
  return 0;
}
