#include<iostream>
using namespace std;

class car{
    private:
    char name[20];
    int series;
    int number;
    string model;

    public:
    car(void){
       cout<<"Enter name of the car:";
       cin>>name;
    }

    car(int ser){
        series=ser;
    }

    car(int num, string mod){
        number=num;
        model=mod;
    }

    void details(){
        cout<<"\nThe name is:"<<name;
        cout<<"\nThe series is:"<<series;
        cout<<"\nThe number is:"<<number;
        cout<<"\nThe model is:"<<model;
    }

    car(car &obj){
        number=obj.number;
        model=obj.model;
    }
};

    int main(){
        car c1;       //1st constructor is called

        car c2(2366);     //2nd constructor is called
    
        car c3(6969,"Benz");        //3rd constructor is called
        c3.details();

        car C=c3;
        C.details();
        return 0;
    }
