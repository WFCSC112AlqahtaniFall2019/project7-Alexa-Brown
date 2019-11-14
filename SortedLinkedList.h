/*
 * Alexa Brown
 * CSC 112
 * Project 7
 * Implemented stack, queue, and linked list sort classes to read in a file of data and output it to a textfile.
 */
#ifndef PROJECT7_SORTEDLINKEDLIST_H
#define PROJECT7_SORTEDLINKEDLIST_H

#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include <string>
using namespace std;

class SortedLinkedList : public LinkedList{
public:
    SortedLinkedList(){}
    void insertSorted(Data obj);
//bring in most of the variables and information from Linked List

};


#endif //PROJECT7_SORTEDLINKEDLIST_H
