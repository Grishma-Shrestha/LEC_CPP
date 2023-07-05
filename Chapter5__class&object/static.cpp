#include<iostream>
using namespace std;

void display(){
    static int i=1;         //static variable=class variable
    i=i+5;
    cout<<"The value of i is:"<<i;
}

int main(){
    display();
    display();
}

