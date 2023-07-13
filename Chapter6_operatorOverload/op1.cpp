#include<iostream>
using namespace std;

class A
{
    int a,b,c;
public:
A(int x, int y, int z)
{
    a=x;
    b=y;
    c=z;
}
void showData()
{
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}

void operator -(){ //operator overloading gareko - lai
    a=-a;
    b=-b;
    c=-c;
}

void displayData()
{
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
};

int main()
{
    A obj(2,3,4);
    //obj.showData();
    -obj;
    obj.displayData();
    return 0;
}