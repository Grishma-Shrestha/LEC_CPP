#include<iostream>
using namespace std;
  
class parent{
    public:
    parent()
    {
        cout<<"this is  parent constructor"<<endl;
    }

    ~parent() 
    {
          cout<<"this is  parent destructor"<<endl;
    }
};

class child:public parent{
    public:
    child(){
        cout<<"this is  child constructor"<<endl;
    }

    ~child(){
          cout<<"this is child destructor"<<endl;
    }    
};

int main()
{
 parent p1;//paila constructor call vayera matra destructor call hunxa
 //object ko scope sakyesi matra destructor call hunxa
 child c1;
}