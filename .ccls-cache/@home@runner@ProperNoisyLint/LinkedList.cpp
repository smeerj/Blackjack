#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "LinkedList.h"

LinkedList::LinkedList(){
    this->head = nullptr;
    this->tail = nullptr;
    this->numSize = 0;
}

LinkedList::LinkedList(Card* card){
    this->head = nullptr;
    this->tail = nullptr;
    this->numSize = 0;
    push_back(card);
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current) {
        Node* next = current->getNext();
        delete current;
        current = next;
    }
    head = nullptr;
    tail = nullptr;
    numSize = 0;
}

void LinkedList::push_back(Card* card) {
    //add a node to the end of the linked list
    Node* newNode = new Node(card);
    if (this->numSize == 0) {
        head = newNode;
        tail = newNode;
    } else {
        this->tail->setNext(newNode);
        newNode->setPrev(this->tail);
        this->tail = newNode;
    }
    numSize++;
}

int LinkedList::size() const {
    return numSize;
}

void LinkedList::printCards() const {
    Node* current = this->head;
    while (current != nullptr) {
        std::cout << (current -> getCard() -> getName()) << std::endl;
        current = current->getNext();
    }
}

Node* LinkedList::getHead() const{
    return head;
}

Node* LinkedList::getTail() const{
    return tail;
}

bool LinkedList::deleteCard(Node* toDelete) {
    if(toDelete == nullptr){
        return false;
    }
    //if deleting head node
    if(this->head == toDelete){
        this->head = toDelete->getNext();
        this->head->setPrev(nullptr);
        delete toDelete;
        this->numSize--;
        return true;
    }
    else if(this->tail == toDelete) {
        this->tail = toDelete->getPrev();
        this->tail->setNext(nullptr);
        delete toDelete;
        this->numSize--;
        return true;
    }
    else {
        toDelete->getPrev()->setNext(toDelete->getNext());
        toDelete->getNext()->setPrev(toDelete->getPrev());
        delete toDelete;
        this->numSize--;
        return true;
    }
    return true;
}

Node*  LinkedList::insert_before(Card *newCard, Node* knownNode){
    if(knownNode == nullptr){
        return nullptr;
    }
    Node* newNode = new Node(newCard);
    //if head node
    if(this->head == knownNode){
        newNode->setNext(this->head);
        this->head->setPrev(newNode);
        this->head = newNode;
        this->numSize++;
        return newNode;
    }
    else {
        newNode->setNext(knownNode);
        newNode->setPrev(knownNode->getPrev());
        knownNode->getPrev()->setNext(newNode);
        knownNode->setPrev(newNode);
        this->numSize++;
        return newNode;
    }
    return nullptr;
}

Node* LinkedList::pop_back() {
  Node* temp = this->tail;
  this->tail = this->tail->getPrev();
  this->tail->setNext(nullptr);
  this->numSize--;
  return temp;
}

void LinkedList::randomize() {
    for (int i = 0; i < numSize; i++) {
        int randomIndex = rand() % numSize;
        Node* currentNode = this->head;
        Node* randomNode = this->head;
        for (int j = 0; j < i; j++) {
            currentNode = currentNode->getNext(); //
        }
        for (int j = 0; j < randomIndex; j++) {
            randomNode = randomNode->getNext();  //goes to random Index
        }
        Card* temp = currentNode->getCard();
        currentNode->setCard(randomNode->getCard());
        randomNode->setCard(temp);
    }
}
