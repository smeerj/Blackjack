#include "Node.h"

Node::Node() {
    this->next = nullptr;
    this->prev = nullptr;
    this->card = nullptr;
}

Node::Node(Card* card) {
    this->next = nullptr;
    this->prev = nullptr;
    this->card = card;
}

Node* Node::getNext() {
   return this->next;      
}

Node* Node::getPrev() {
   return this->prev;   
}

void Node::setNext(Node* node) {
    this->next = node;
}

void Node::setPrev(Node* node) {
    this->prev = node;
}

void Node::setCard(Card* card) {
    this->card = card;
}
Card* Node::getCard() const {
    return this->card;
}





