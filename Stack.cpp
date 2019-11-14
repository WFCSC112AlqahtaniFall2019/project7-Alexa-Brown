/*
 * Alexa Brown
 * CSC 112
 * Project 7
 * Implemented stack, queue, and linked list sort classes to read in a file of data and output it to a textfile.
 */

#include <iostream>
#include <fstream>
#include <string>
#include "Stack.h"
#include "LinkedList.h"
#include "Data.h"
using namespace std;
Stack::Stack(){ //default constructor
    head = new Node();
}

void Stack:: push_back(Data obj){ //put all of the information in the data object into the stack
    if (head->data.getCountry() == "") {
       Node* temp = new Node(obj, nullptr);
       head = temp;
    }
    else{
        Node* temp = new Node(obj, nullptr);
        temp->next = head;
        head = temp;
    }
}

bool Stack:: pop_head(Data obj){ //deleting each of the elements to avoid memory leakage
    if (head != nullptr){
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }
    else{ //empty
        return false;
    }
}