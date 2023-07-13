#include<iostream>
using namespace std;

class Parent

{
    public:
     virtual void display()//virtual le chai  parent ko naliyera jun ko address deko cha tyo matra her bhancha parent ko naher bhancha
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
    Parent *bbtr;//YESMAI JANXA YESKO DISPLAY CALL GARXA
    // j sukai ko address liye pani parent class kei diaplay huncha c++ko runtime rule bhayera
    Child c1;
    bbtr=&c1;//YESLE J LIYEPANI 
    bbtr->display();
    return 0;
}