/*
 * Alexa Brown
 * CSC 112
 * Project 7
 * Implemented stack, queue, and linked list sort classes to read in a file of data and output it to a textfile.
 */


#include <iostream>
#include <fstream>
#include <string>
#include "Data.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "SortedLinkedList.h"
using namespace std;



int main() {

    Data other;
    Stack* nextStack = new Stack;
    Queue* nextQueue = new Queue;
    SortedLinkedList* nextList = new SortedLinkedList;

    //infile and outfiles
    ifstream inFile;
    ofstream outFileStack;
    ofstream outFileQueue;
    ofstream outFileSorted;

    //open the files
    inFile.open ("WorldHappinessReport.csv");
    outFileStack.open ("stacked.txt");
    outFileQueue.open ("queue.txt");
    outFileSorted.open ("sorted.txt");

    //outFileStack << "Hi "; //checking that things are writing to the outfiles
    //outFileQueue << "Hi";
   // outFileSorted << "Hi";

   //checking that all of the files are opened and can be used
    if (!inFile.is_open()){
        cout << "The file did not open" << endl;
    }
    if (!outFileStack.is_open()){
        cout << "Stack file did not open" << endl;
    }
    if (!outFileQueue.is_open()){
        cout << "Queue file did not open" << endl;
    }
    if (!outFileSorted.is_open()){
        cout << "Sorted file did not open" << endl;
    }
    cout << "Files are open" << endl;

    //getting the information from the files
    while (!inFile.eof()) {

            //cout << "hi" <<endl;

            //getline will go until the comma then will move on
            string c, r, s, g;
            getline(inFile, c, ',');
            getline(inFile, r, ',');
            getline(inFile, s, ',');
            getline(inFile, g, '\n');

            int rank = stoi(r); //change into integer
            double score = stod(s); //change into a double
            double gdpvalue = stod(g); //change into a double
            Data info = Data (c, rank, score, gdpvalue); //creating the Data object with the information
            nextStack->push_back(info); //putting the information in the stack
            nextQueue->enqueue_tail(info); //putting the information in the queue
            nextList->insertSorted(info); //putting the information in the linkedlist
            other = info;
    }

    //cout << "gets to print"<< endl;

    //printing the information into the txt files
    nextStack->print(outFileStack);
    nextQueue->print(outFileQueue);
    nextList->print(outFileSorted);

    //cout << "gets to close"<< endl;

    //while(nextStack->pop_head(other));
   // while(nextQueue->dequeue_head());

    //closing the files after using them to avoid memory leakage
    inFile.close();
    outFileStack.close();
    outFileQueue.close();
    outFileSorted.close();
    cout << "Files are closed" << endl;

    return 0;
}