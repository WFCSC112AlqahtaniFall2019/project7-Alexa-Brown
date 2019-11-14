/*
 * Alexa Brown
 * CSC 112
 * Project 7
 * Implemented stack, queue, and linked list sort classes to read in a file of data and output it to a textfile.
 */
#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H
#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include "Data.h"
#include <string>

using namespace std;


class Stack : public LinkedList{
    public:
    Stack(); //default constructor
     void push_back(Data obj);
     bool pop_head(Data obj);
    // Node newNode(obj, nullptr);
};



#endif //PROJECT7_STACK_H
