using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include "Stack.h"
#include "LinkedList.h"
#include "Data.h"

Stack::Stack(){
    head = nullptr;
}

void Stack:: push_back(Data obj){
    Node* current = head->next;
    Node* temp;
    if (head->next == nullptr) {
        temp = new Node(obj, nullptr);
        head->next = temp;
    }
    else{
        temp = new Node(obj, nullptr);
        head->next = temp;
        temp->next = current;
    }
}

bool Stack:: pop_head(){
    Node* deleted = head->next;
    if (head->next == nullptr){
        return false;
    }
    else{
        head->next = deleted->next;
        //still need to output to file
        delete deleted;
        return true;
    }

}