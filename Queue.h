#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H

#include <iostream>
#include <fstream>
#include "LinkedList.h"
using namespace std;


class Queue: public LinkedList {
public:
    Queue();

private:
    LinkedList tail; //right?


};


#endif //PROJECT7_QUEUE_H
