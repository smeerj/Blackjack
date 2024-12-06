#ifndef Card_H
#define Card_H
#include <string>
using namespace std;

class Card
{
private:
    int value;
    char suit;
    string name;
public:
    Card();
    Card(string name, char suit, int val);
    ~Card();
    void setName(string name);
    void setSuit(char suit);
    void setVal(int val);
    string getName();
    char getSuit();
    int getValue() const;
    string toString() const;
};

#endif