//definside.cpp
//definition inside the clss

#include<iostream>
using namespace std;
class student
{
    private:
    char name[20];
    char phone[10];
    int roll;

    public:
    void getData()
    {
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Phone Number:";
        cin>>phone;
        cout<<"Enter Roll No:";
        cin>>roll;
    }
    void showData()
    {
        cout<<"\nName:"<<name;
        cout<<"\nPhone Number:"<<phone;
        cout<<"\nRoll No:"<<roll;
    }
};      //end of class

int main()
{
    student s1,s2;
    s1.getData();
    s2.getData();

    cout<<"\nFirst student";
    s1.showData();

    cout<<"\n\nSecond student";
    s2.showData();

    return 0;

}