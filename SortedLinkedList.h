
#ifndef PROJECT7_SORTEDLINKEDLIST_H
#define PROJECT7_SORTEDLINKEDLIST_H

#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include <string>
using namespace std;

class SortedLinkedList : public LinkedList{
public:
    void insertSorted(Data obj);

protected:
    Node* head;
};


#endif //PROJECT7_SORTEDLINKEDLIST_H
