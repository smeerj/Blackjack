#ifndef NODE_H
#define NODE_H

#include <string>
#include "Card.h"

struct Node {
    public:
        Node();
        Node(Card* card);
        void setNext(Node* node);
        void setPrev(Node* node);
        Node* getNext();
        Node* getPrev();
        Card* getCard() const;
        void setCard(Card* card);
        
    private:
        Card* card;
        Node* next;
        Node* prev;
};

#endif