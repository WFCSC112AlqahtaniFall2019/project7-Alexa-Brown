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
    LinkedList* list;
    Stack* nextStack = new Stack;
    Queue* nextQueue = new Queue;
    SortedLinkedList* nextList = new SortedLinkedList;

    ifstream inFile;
    ofstream outFileStack;
    ofstream outFileQueue;
    ofstream outFileSorted;


    inFile.open ("WorldHappinessReport.csv");
    outFileStack.open ("stacked.txt");
    outFileQueue.open ("queue.txt");
    outFileSorted.open ("sorted.txt");

    //outFileStack << "Hi "; //checking that things are writing to the outfiles
    //outFileQueue << "Hi";
    outFileSorted << "Hi";

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

    while (!inFile.eof()) {

            cout << "hi" <<endl;

            string c, r, s, g;
            getline(inFile, c, ',');
            getline(inFile, r, ',');
            getline(inFile, s, ',');
            getline(inFile, g, '\n');

            int rank = stoi(r);
            double score = stod(s);
            double gdpvalue = stod(g);
            Data info = Data (c, rank, score, gdpvalue);
            nextStack->push_back(info);
            nextQueue->enqueue_tail(info);
            nextList->insertSorted(info);

    }

    cout << "gets to print"<< endl;

    nextStack->print(outFileStack);
    nextQueue->print(outFileQueue);
    nextList->print(outFileSorted);

    cout << "gets to close"<< endl;

    inFile.close();
    outFileStack.close();
    outFileQueue.close();
    outFileSorted.close();
    return 0;
}