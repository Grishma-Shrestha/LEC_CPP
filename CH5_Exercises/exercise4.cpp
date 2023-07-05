//defoutside.cpp
//definition outside the class

#include<iostream>
using namespace std;
class student
{
    private:
    char name[20];
    char phone[10];
    int roll;

    public:
    void getData(); //function declaration
    void showData();
};      //end of class

void student::getData()  //function definition
{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Phone Number:";
    cin>>phone;
    cout<<"Enter Roll No:";
    cin>>roll;
}
void student::showData()
{
    cout<<"\nName:"<<name;
    cout<<"\nPhone Number:"<<phone;
    cout<<"\nRoll No:"<<roll;
}

int main(){
     student s1,s2;
    s1.getData();
    s2.getData();

    cout<<"\nFirst student:";
    s1.showData();
    cout<<"\n\nSecond student:";
    s2.showData();

    return 0;
}