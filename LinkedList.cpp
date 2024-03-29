
/* Class: LinkedList
 * Description: Very basic singly linked List class with single head 
 * class for use with Data object. It is meant to be inherited for
 * more complex linked lists.
 */
/*
 * Alexa Brown
 * CSC 112
 * Project 7
 * Implemented stack, queue, and linked list sort classes to read in a file of data and output it to a textfile.
 */

#include "LinkedList.h"
#include <string>
using namespace std;

LinkedList::LinkedList() {
    head = nullptr; // empty list
}


// copy constructor
LinkedList::LinkedList(const LinkedList& list) {
    // if list is not empty, perform deep copy
    if(list.head) {
        Node *curr, *listcurr;
        // copy head node data
        head = curr = new Node(list.head->data);
        //list.head->item
        listcurr = list.head->next;
        // loop over rest of nodes, copying data
        while (listcurr != nullptr) {
            curr = curr->next = new Node(listcurr->data);
            //listcurr-> item
            listcurr = listcurr->next;
        }
    } else {
        // if list is empty, create another empty list
        head = nullptr;
    }
}

// assignment operator (use copy and swap)
const LinkedList& LinkedList::operator=(LinkedList rhs) {
    swap(head,rhs.head);
    return *this;
}

void LinkedList::print(ostream &os) {
    // start at the head of the list
    Node *curr = head;
    while (curr != nullptr) {
        os << curr->data << endl; // use overloaded output operator to print
        curr = curr->next; // go to next node in list
    }
}
void LinkedList::pop_head() {
    // if not an empty list
    if (head != nullptr) {
        // save location of where head points
        Node *curr = head;
        // head points to next node
        head = head->next;
        // delete node where head originally pointed
        delete curr;
    }
}
LinkedList::~LinkedList() {
    // keep popping until empty list
    while (head != nullptr) {
        pop_head();
    }
}
/*
void LinkedList::append(Data item) {//to add an item to the list, used also to create the list
    if (head == nullptr) {
        head = new Node (item);
    } else {
        Node* current = head;
        while (current->next != nullptr){
            current = current->next;
        }
        current->next = new Node (item);
    }
}*/
