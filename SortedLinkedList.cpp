/*
 * Alexa Brown
 * CSC 112
 * Project 7
 * Implemented stack, queue, and linked list sort classes to read in a file of data and output it to a textfile.
 */
#include <iostream>
#include <fstream>
#include "SortedLinkedList.h"
#include "LinkedList.h"
#include <string>
using namespace std;


void SortedLinkedList:: insertSorted(Data obj) {
    Node *newData = new Node(obj, nullptr);
   // head = nullptr;
    //insertion sort algorithm, changed it from the last lab to see if it could work better
    //head = obj;
   //Node* iterator = head;
    //while (iterator != nullptr) {
        cout << "in sorted";

        if (head == nullptr) {
            head = newData;
            //if the list is empty, no sorting necessary
            //if there is only one element in the list, it is already sorted
        } else {

            Node *current = head; //to cycle over list to find elements not sorted
            int count = 0;
            Node *previous = nullptr;
            bool sorted;
            //current = head; //restarts each time you enter the list
           // previous = nullptr;
            //need to check if it should go at the head pointer
            if (current->data > newData->data) {
                newData->next = head;
                head = newData;
                return; //end the class because found where it goes
            }
            //otherwise continue searching
            previous = current;
            current = current->next;//keep iterating

            while(current) {
                if (newData->data > current->data) { //the next one is still larger so don't need to move anything around
                    previous = current;
                    current = current->next;
                }
            }
            //after this statement, the location is found so can insert it
            Node *temp = current;
            newData->next = current;
            previous->next = newData;

            /*
            //otherwise, the list needs to be sorted because it is made up of multiple elements
            Node* temp = head;
            Node* otherCurrent = head; //to cycle over the list and find where the number belongs to sort it
            Node* otherPrevious = nullptr;
            while (current != nullptr){
                sorted = false;
                if (current->data > newData->data) {

                    cout << "Here" << endl;
                    otherCurrent = head->next;
                    otherPrevious = head;
                    while (!sorted && otherCurrent != nullptr) {
                            if ((otherPrevious->data < newData->data) && (newData->data < otherCurrent->data)) { //if it needs to be inserted somewhere other than the head
                            previous->next = previous->next->next;
                            temp->next = otherCurrent;
                            otherPrevious->next = temp;
                            sorted = true;

                        }
                        else if (newData->data < head->data) { //if it needs to be inserted at the head
                            previous->next = previous->next->next;
                            temp->next = head;
                            head = temp;
                            sorted = true;
                        }
                        else{
                            sorted = false;
                        }
                        otherCurrent = otherCurrent->next;
                        otherPrevious = otherPrevious->next;
                    }
                }
                current = head->next;
                previous = head;
                for (int i = 0; i < count; i++) {
                    current = current->next;
                    previous = previous->next;
                } //I chose to use this to ensure that current and previous are pointing to the correct place in the list.
                //By forcibly coding it in here, I am more confident that it is pointing to the right place.
                count++;
            }
        }*/
      //  }
       // iterator = iterator->next;
    }
}
