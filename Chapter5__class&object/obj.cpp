#include<iostream>
using namespace std;

class Vehicle{
    private:
    int platenumber;

    // public:
    // int getnumber(int a){
    //     // cout<<"Enter the number of scooter:";
    //     // cin>>a;                                      //security defense
    //     // a=platenumber;
        
    //     return a;
    // }

    public:
    vehicle(int pnum){
        platenumber=pnum;
        cout<<"my plate number is:"<<platenumber;
    }
};

int main(){
    Vehicle scooter;
    // cout<<"my platenumber is:"<<scooter.getnumber(5678);
     //scooter.platenumber=13;
    //cout<<"Plate number of my scooter is:"<<platenumber;
    // platenumber=123;
    //getnumber();
    //int number=scooter.getnumber();
    //cout<<"The number of my scooter is:"<<scooter.platenumber();
}