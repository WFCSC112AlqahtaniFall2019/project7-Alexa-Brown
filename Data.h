
#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Data {
    friend ostream& operator << (ostream& os, Data a);

public:
    Data();
    Data(string c, int rank, double score, double g);
private:
        string country;
        int happinessRank;
        double happinessScore;
        double GDP;
        bool operator > (Data d);
        bool operator < (Data d);

public:
    void setCountry (string c){
        country = c;
    }
    string getCountry(){
        return country;
    }
    void sethappinessRank (double r){
        happinessRank = r;
    }
    double gethappinessRank(){
        return happinessRank;
    }
    void sethappinessScore (double s){
        happinessScore = s;
    }
    double gethappinessScore(){
        return happinessScore;
    }
    void setGDP(double g){
        GDP = g;
    }
    double getGDP(){
        return GDP;
    }


};


#endif //PROJECT7_DATA_H
