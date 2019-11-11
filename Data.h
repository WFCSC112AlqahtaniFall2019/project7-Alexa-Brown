
#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Data {
    friend ostream& operator << (ostream& os, Data a);
    protected:
        string country;
        int happinessRank;
        int happinessScore;
        int GDP;
        bool operator > (Data d);
        bool operator < (Data d);

};


#endif //PROJECT7_DATA_H
