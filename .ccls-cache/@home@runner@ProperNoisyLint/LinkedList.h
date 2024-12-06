#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

struct LinkedList {
    private:
        Node* head;
        Node* tail;
        int numSize;
    public: 
        LinkedList();
        LinkedList(Card* card);
        ~LinkedList();
        void push_back(Card* card);
        int size() const;
        void printCards() const;
        Node* getHead() const;
        Node* getTail() const;
        bool deleteCard(Node* toDelete);
        Node* pop_back();
        Node* insert_before(Card* newCard, Node* knownNode);
        void randomize();
};

#endif // LINKEDLIST_H
