
#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H
#include <iostream>
#include <fstream>
#include "LinkedList.h"

using namespace std;


class Stack : public LinkedList{
    public:
    Stack();
     void push_back(Data obj);
     void pop_head(Data obj);


};


#endif //PROJECT7_STACK_H
