#include <iostream>
#include <fstream>
#include "SortedLinkedList.h"
#include "LinkedList.h"
using namespace std;

/*
void SortedLinkedList:: insertSorted(){
    //insertion sort algorithm
        Node *current = head.next; //to cycle over list to find elements not sorted
        int count = 0;
        Node *previous = head;
        bool sorted;

        if (head == nullptr || head->next == nullptr){
            //if the list is empty, no sorting necessary
            //if there is only one element in the list, it is already sorted
            return;
        }
        else{
            //otherwise, the list needs to be sorted because it is made up of multiple elements
            Node* temp = head;
            Node* otherCurrent = head->next; //to cycle over the list and find where the number belongs to sort it
            Node* otherPrevious = head;
            while (current != nullptr){
                sorted = false;
                if (previous->value > current->value) {
                    temp = current;
                    // cout << "Here" << endl;
                    otherCurrent = head->next;
                    otherPrevious = head;
                    while (!sorted && otherCurrent != nullptr) {
                        if ((otherPrevious->value < temp->value) && (temp->value < otherCurrent->value)) { //if it needs to be inserted somewhere other than the head
                            previous->next = previous->next->next;
                            temp->next = otherCurrent;
                            otherPrevious->next = temp;
                            sorted = true;

                        }
                        else if (temp->value < head->value) { //if it needs to be inserted at the head
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
        }
    }
}
*/