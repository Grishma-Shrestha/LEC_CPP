#include<iostream>
using namespace std;

class car{
    public:         //base class
    char name[10];

    void getData(){
        cout<<"Enter the name of the car:";
        cin>>name;
    }

    void showData(){
        cout<<"My car name is:"<<name;
    }
};

class vehicle:public car{           //derived class
   
    public:
    void f(){
        cout<<"I am cool";
}
};

int main()
{
    car mycar;
    mycar.getData();
    mycar.showData();

    mycar.f();
}