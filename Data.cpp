
#include "Data.h"
#include <iostream>
#include <fstream>
using namespace std;

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
    os << a.country;
}
