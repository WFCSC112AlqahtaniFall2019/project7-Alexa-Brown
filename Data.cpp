
#include "Data.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Data::Data() {
    country = "";
    happinessRank = 0;
    happinessScore = 0;
    GDP = 0;
}
Data::Data(string c, int rank, double score, double g) {
    country = c;
    happinessRank = rank;
    happinessScore = score;
    GDP = g;
}

bool Data:: operator > (Data d){ // > overloader
    if (this->happinessRank < d.happinessRank){
        return false;
    }
    else if (this->happinessRank > d.happinessRank){
        return true;
    }
    else{
        return false;
    }
}
bool Data:: operator < (Data d){ // < overloader
    if (this->happinessRank > d.happinessRank){
        return false;
    }
    else if (this->happinessRank < d.happinessRank){
        return true;
    }
    else {
        return false;
    }

}

ostream& operator << (ostream& os, const Data a){
    os << "Country: " << a.country << " Rank: " << a.happinessRank << " Score: " << a.happinessScore << " GDP: " << a.GDP;
}
