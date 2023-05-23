#include<iostream>
using namespace std;

    //overloading=same name but different parameters
    
    void display(int a) {
        cout<<"integer number:"<<a;         //same name i.e.display but different paramters i.e. int and duble
    }

     void display(double b) {
        cout<<"\ndouble number:"<<b;
    }

     int main(){
        int a=4;
        double b=6;

     display(a);
     display(b);

     return 0;
}