using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include "Stack.h"
#include "LinkedList.h"
#include "Data.h"

Stack::Stack(){
    head = new Node();
}

void Stack:: push_back(Data obj){
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

bool Stack:: pop_head(Stack* obj){
    if (head != nullptr){
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }
    else{
        return false;
    }
    /*Node* deleted = new Node(head->next->data,nullptr);
    //head->next->data?
    if (head->next == nullptr){
        return false;
    }
    else{
        head->next = deleted->next;
        //still need to output to file
        delete deleted;
        return true;
    }
*/
}