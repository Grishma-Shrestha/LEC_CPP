#include<iostream>
using namespace std;

class second;
class first{
    private:
    int data1;

    public:
    first(int x){
        data1=x;
    }
    friend int sum(first a, second b);
};

class second{
    private:
    int data2;

    public:
    second(int x){
        data2=x;
    }
    friend int sum(first a, second b);
};

int sum(first a, second b){
    return (a.data1, b.data2);
}

int main(){
    first a(10);
    second b(15);
    cout<<"the sum is:"<<sum(a,b);
    return 0;
}