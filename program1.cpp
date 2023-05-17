#include <iostream>
using namespace std;

class Student{
    public:
    char name[30];
    char address[30];

void studentApp(){
      cout<<"student application";
}

void studentPro(){
    cout<<"student program";

}

};

int main(){
     Student s1,s2;
    cout<<"enter name";
    cin>>s1.name;
    cout<<"enter address";
    cin>>s1.address;

    s1.studentApp();
    s1.studentPro();

     return 0; 
}
