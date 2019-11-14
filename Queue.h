/*
 * Alexa Brown
 * CSC 112
 * Project 7
 * Implemented stack, queue, and linked list sort classes to read in a file of data and output it to a textfile.
 */
#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H

#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include <string>
using namespace std;


class Queue: public LinkedList {
public:
    Queue();
    void enqueue_tail (Data obj);
    bool dequeue_head ();

private:
    Node* tail;


};


#endif //PROJECT7_QUEUE_H
