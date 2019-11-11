
#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Data {
    friend ostream& operator << (ostream& os, Data a);
private:
        string country;
        int happinessRank;
        int happinessScore;
        int GDP;
        bool operator > (Data d);
        bool operator < (Data d);

public:
    void setCountry (string c){
        country = c;
    }
    string getCountry(){
        return country;
    }
    void sethappinessRank (int r){
        happinessRank = r;
    }
    int gethappinessRank(){
        return happinessRank;
    }
    void sethappinessScore (int s){
        happinessScore = s;
    }
    int gethappinessScore(){
        return happinessScore;
    }
    void setGDP(int g){
        GDP = g;
    }
    int getGDP(){
        return GDP;
    }


};


#endif //PROJECT7_DATA_H
