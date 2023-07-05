#include<iostream>
using namespace std;

class student{
    private:
    char name[30];
    int roll;

    public:
    void getInfo(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll:";
        cin>>roll;
    }

    void showInfo(){
        cout<<"Name:"<<name;
        cout<<"Roll:"<<roll;
    }
};

int main(){
    student s[8];
    int i,n;
    cout<<"enter number of student:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        s[i].getInfo();
    }

    for(i=0;i<n;i++);
    {
        s[i].showInfo();
    }

    return 0;
}