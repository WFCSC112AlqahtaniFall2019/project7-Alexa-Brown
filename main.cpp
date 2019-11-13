#include <iostream>
#include <fstream>
#include <string>
#include "Data.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
using namespace std;



int main() {
    LinkedList list;
    Stack newInfo;
    ifstream inFile;
    ofstream outFile;

    inFile.open ("WorldHappinessReport.csv");
    outFile.open ("stacked.txt");

    if (!inFile.is_open()){
        cout << "The file did not open" << endl;
    }
    //cout << "Opened" << endl;

    while (!inFile.eof()) {
        Data info;
        for (int i = 0; i<3; i++) {
            cout << "hi" <<endl;
            string c;
            int r, s, g;//get the first 4 columns of info
            inFile >> c;
            info.setCountry(c);
            inFile >> r;
            info.sethappinessRank(r);
            inFile >> s;
            info.sethappinessScore(s);
            inFile >> g;
            info.setGDP(g);
            newInfo.push_back(info);
            inFile.clear();
        }
        list.append(info);
        cout << "Hello" << endl;
        newInfo.push_back(info);
        cout << "hello" << endl;
        cout << newInfo.pop_head(info);
    }

//cout << newInfo.pop_head(info);




    inFile.close();
    outFile.close();
    return 0;
}