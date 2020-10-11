#include <bits/stdc++.h>
#include "ParkingLot.h"
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

int main() {
    //code
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    string command;
    ParkingLot parkingLot;
    while(cin>>command){
        if(command=="Create_parking_lot"){
            int lotcount;
            cin>>lotcount;
            parkingLot.createParkingLot(lotcount);
        }
        else if(command=="Park"){
            string regno;
            string trash;
            int age;
            cin>>regno>>trash>>age;
            parkingLot.park(regno,age);
        }
        else if(command=="Slot_numbers_for_driver_of_age"){
            int age;
            cin>>age;
            parkingLot.getSlotNumbersFromAge(age);
        }
        else if(command=="Slot_number_for_car_with_number"){
            string regno;
            cin>>regno;
            parkingLot.getSlotNumberFromRegNo(regno);
        }
        else if(command=="Leave"){
            int slotNo;
            cin>>slotNo;
            parkingLot.leave(slotNo);
        }
        else if(command=="Vehicle_registration_number_for_driver_of_age"){
            int age;
            cin>>age;
            parkingLot.getRegistrationNumbersFromAge(age);
        }
    }
    return 0;
}
