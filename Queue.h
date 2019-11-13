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
    Node* tail; //right?


};


#endif //PROJECT7_QUEUE_H
