#include<iostream>
using namespace std;

class mobile{
    private:        //attributes are always private since oop le security implementation garcha
    int m=10;

    public:
    void display(){
        cout<<"\nvalue of m is:"<<m;
        cout<<"\nvalue of ? is:"<<this->m;  //yo address ma bhako value print gar bhaneko
        cout<<"\nThe address of current object is:"<<this;      //object ko adress chai this operator le print gariracha
    }
};

int main(){     //class instance bhaneko object ho
    mobile m1,m2;
    m1.display();
    m2.display();
    return 0;

}       //THIS POINTER IS ALWAYS A SURE QUESTION