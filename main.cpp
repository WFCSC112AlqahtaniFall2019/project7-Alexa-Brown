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

    //outFileStack << "Hi ";

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
    cout << "Opened" << endl;
int x = 0;
    while (x<2) {
        //!inFile.eof()

            cout << "hi" <<endl;

            //int r, s, g;//get the first 4 columns of info
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

           /* inFile >> c;
            info.setCountry(c);
            inFile >> r;
            info.sethappinessRank(r);
            inFile >> s;
            info.sethappinessScore(s);
            inFile >> g;
            info.setGDP(g);*/
            //newInfo->push_back(info);
           // inFile.clear();

        x++;
    }

    cout << "gets to print"<< endl;

    nextStack->print(outFileStack);
    nextQueue->print(outFileQueue);
    nextList->print(outFileSorted);


    /*while(newInfo->pop_head(newInfo)){
        newInfo->print(outFileStack);
        if (!newInfo->pop_head(newInfo)){
            break;
        }
    }*/


    cout << "gets to close"<< endl;

    inFile.close();
    outFileStack.close();
    outFileQueue.close();
    outFileSorted.close();
    return 0;
}