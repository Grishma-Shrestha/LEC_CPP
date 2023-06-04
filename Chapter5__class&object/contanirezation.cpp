#include<iostream>
using namespace std;
class A{
    public:
    int data;
    void getdata(){
        cout<<"enter the value of the data";
        cin>>data;
    }

    void showdata(){
        cout<<"the value of data is";
        cout<<data;
    }
};

class B{
    public:
    A a;
    int b;
    void getdata()
    {
        a.getdata();
        cout<<"enter the value of b";
        cin>>b;
    }

    void showdata()
    {
        a.showdata();
        cout<<"\nthe value of b is"<<b;
    }
};

int main(){
    B bb;
    bb.getdata();
    bb.showdata();
}