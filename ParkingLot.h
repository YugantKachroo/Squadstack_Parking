#ifndef CLION_PARKINGLOT_H
#define CLION_PARKINGLOT_H
#include <bits/stdc++.h>
using namespace std;

class ParkingLot {
    int MAX_SIZE = 0;
    int CURRENT_CARS = 0;
private:
    class Car{
    public:
        string regNo;
        int age;
        Car(const string &regNo, const int &age);
    };

    bool isFull(){
        if(CURRENT_CARS==MAX_SIZE)
            return true;
        else
            return false;
    }

    bool isEmpty(){
        if(CURRENT_CARS==0 and MAX_SIZE!=0)
            return true;
        else{
            return false;
        }
    }

public:
    vector<int> availableSlots;
    map<int,string> slotToRegNo;
    map<string,int> regNoToAge;
    map<string,int> carToSlot;
    map<int,vector<int>> ageToSlot;
    map<int,vector<string>> ageToRegn;

    void createParkingLot(int lotCount);

    void park(string regNo, int age);

    void leave(int slotNo);

    void getRegistrationNumbersFromAge(int age);

    void getSlotNumbersFromAge(int age);

    void getSlotNumberFromRegNo(string regNo);
};


#endif //CLION_PARKINGLOT_H

