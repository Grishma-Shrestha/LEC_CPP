#include<iostream>
using namespace std;

class calc{     
    public:
    int a ,b;
    int length, breadth, height;
    int area;
    int volume;

    calc(void){         //default constructor
        a=10;
        b=20;
    }

    void calArea(){         //def of member inside class        //method
        area=a*b;
        cout<<"The area is:"<<area;
    }

    calc(int len, int brth, int hgt){          //parameterized constructor
         length=len;
         breadth=brth;
         height=hgt;
    }
    void calVol();
};

void calc::calVol(){     //def of member outside class       
    volume=length*breadth*height;
    cout<<"\nThe volume is:"<<volume;
}

int main(){
    calc c1,c2(2,3,4);            //object
    c1.calArea();
    c2.calVol();
}

