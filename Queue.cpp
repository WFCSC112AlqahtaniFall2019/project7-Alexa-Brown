#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Queue.h"

Queue::Queue() {
    head =nullptr;
    tail = nullptr;
}

void Queue:: enqueue_tail (Data obj){
    Node* current = new Node(obj, nullptr);
    if(tail == nullptr) { // then you are at the end of the list
        head = current;
        tail = current;
    }
    else{
        tail->next = current;
        tail = current;
    }
  /*
    tail = head;
    Node* temp;
    while (current != nullptr){
        current = current->next;
        tail = tail->next;
    }
    temp = new Node (obj, tail);
    tail->next = temp;
    */
}

bool Queue::dequeue_head (){
    Node* deleted = head;
    if (head != nullptr){
        head = head->next;
        delete deleted;
        return true;
    }
    else{
        return false;
    }
}
