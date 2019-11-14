/*
 * Alexa Brown
 * CSC 112
 * Project 7
 * Implemented stack, queue, and linked list sort classes to read in a file of data and output it to a textfile.
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Queue.h"

Queue::Queue() { //default constructor
    head = nullptr;
    tail = nullptr;
}

void Queue:: enqueue_tail (Data obj){ //put all of the information in the data object into the queue
    Node* current = new Node(obj, nullptr);
    if(tail == nullptr) { // then you are at the end of the list
        head = current;
        tail = current;
    }
    else{
        tail->next = current;
        tail = current;
    }
}

bool Queue::dequeue_head (){ //deleting all of the elements in the queue to avoid memory leakage
    Node* deleted = head;
    if (head != nullptr){
        head = head->next;
        delete deleted;
        return true;
    }
    else{
        return false; //empty
    }
}
