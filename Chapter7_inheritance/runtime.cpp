#include<iostream>
using namespace std;

class Parent

{
    public:
    void display()
    {
       cout<<"this is parent class";
    }
 
};

class Child : public Parent
{
    public:
     void display()
    {
        cout<<"this is child class";
    }
   
};

int main()
{
    Parent *bbtr;
    Child c1;
    bbtr=&c1;
    bbtr->display();
    return 0;
}