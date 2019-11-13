#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Queue.h"

Queue::Queue() {
    head =nullptr;
}

void Queue:: enqueue_tail (Data obj){
    Node* current = head->next;
    tail = head;
    Node* temp;
    while (current->next != nullptr){
        current = current->next;
        tail = tail->next;
    }
    temp = new Node (obj, tail);
    tail->next = temp;
    delete current;
}

bool Queue::dequeue_head (){
    Node* deleted = head->next;
    if (head->next == nullptr){
        return false;
    }
    else{
        head->next = deleted->next;
        delete deleted;
        return true;
    }
}
