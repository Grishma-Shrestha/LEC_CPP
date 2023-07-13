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

class teacher{
    private:
    char naam[20];
    int umer;
    public:
    void showdata(){
        cout<<"enter naam";
        cin>>naam;
        cout<<"enter umer:";
        cin>>umer;
    }
    
    void display(){
        cout<<"naam:"<<naam;
        cout<<"umer:"<<umer;
    }

};

class leader:public student,public teacher{
    private:
    char address[20];
    int age;
    public:
    void showdata(){
        student::showdata();
        teacher::showdata();
        cout<<"enter address";
        cin>>address;
        cout<<"enter age";
        cin>>age;
    }
    
    void display(){
        student::display();
        teacher::display();
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