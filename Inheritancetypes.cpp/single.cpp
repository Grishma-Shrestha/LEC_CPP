#include<iostream>
using namespace std;

class student
{
    private:
    char name[20];
    int id;
    public:
    void showdata(){
        cout<<"enter name";
        cin>>name;
        cout<<"enter id:";
        cin>>id;
    }
    
    void display(){
        cout<<"name:"<<name;
        cout<<"id:"<<id;
    }
};

class leader:public student{
    private:
    char address[20];
    int age;
    public:
    void showdata(){
        student::showdata();
        cout<<"enter address";
        cin>>address;
        cout<<"enter age";
        cin>>age;
    }
    
    void display(){
        student:display();
        cout<<"address:"<<address;
        cout<<"age:"<<age;
    }
};

int main(){
    leader l1;
    l1.showdata();
    l1.display();
    return 0;
}