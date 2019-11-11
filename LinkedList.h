/* Class: LinkedList
 * Alexa Brown
 * Description: Very basic singly linked List class with single head
 * class for use with Data object. It is meant to be inherited for
 * more complex linked lists. (Comes with Node class.)
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Data.h" //You need to create this
#include <string>
using namespace std;

class Node {
public:
    Data data; // object at node
    Node* next; // pointer to next node

    Node(Data& d, Node *n= nullptr);
};
Node::Node(Data& d, Node *n) {
    data.setCountry(d.getCountry());
    data.setGDP(d.getGDP());
    data.sethappinessRank(d.gethappinessRank());
    data.sethappinessScore(d.gethappinessScore());
    n = nullptr;
};

class LinkedList {
protected:
    Node* head;
public:
    LinkedList();
    LinkedList(const LinkedList& list);
    const LinkedList& operator=(LinkedList rhs);
    void print(ostream &os);
    void pop_head();
    ~LinkedList();
    void append(Data item);
};

#endif //LINKEDLIST_H
