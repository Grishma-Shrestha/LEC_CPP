//objasdtype.cpp
//object as data types

#include<iostream>
using namespace std;

class complex 
{
    private:
    float real;
    float img;

    public:
    void readValue()
    {
        cout<<"\nEnter Real Part:";
        cin>>real;
        cout<<"Enter Imaginary Part:";
        cin>>img;
    }
    
    void showValue()
    {
        cout<<"("<<real<<", "<<img<<")";
    }

    void add(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }
};

int main()
{
    complex c1,c2,c3;
    cout<<"Enter first complex number:";
    c1.readValue();
    cout<<"\nEnter second complex number:";
    c2.readValue();

    c1.showValue();
    cout<<"+";
    c2.showValue();

    c3.add(c1,c2);
    cout<<"=";
    c3.showValue();

    return 0;
}