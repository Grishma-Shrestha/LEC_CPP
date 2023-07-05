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

class teacher:public student{
    private:
    char naam[20];
    int umer;
    public:
    void showdata(){
        student::showdata();
        cout<<"enter naam";
        cin>>naam;
        cout<<"enter umer:";
        cin>>umer;
    }
    
    void display(){
        student::display();
        cout<<"naam:"<<naam;
        cout<<"umer:"<<umer;
    }

};

class leader:public teacher{
    private:
    char address[20];
    int age;
    public:
    void showdata(){
        teacher::showdata();
        cout<<"enter address";
        cin>>address;
        cout<<"enter age";
        cin>>age;
    }
    
    void display(){
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