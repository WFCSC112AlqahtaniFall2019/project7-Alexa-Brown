using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include "Stack.h"
#include "LinkedList.h"
#include "Data.h"

Stack::Stack(){
}

void Stack:: push_back(Data obj){
    Node newNode (obj, nullptr);
    newNode.next = head.next;
    head = newNode;
}

bool Stack:: pop_head(Data obj){
    Node current (obj, nullptr);
    if (current.next == nullptr){
        return false;
    }
    while (current.next != nullptr){

        return true;
    }

}