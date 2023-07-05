#include<iostream>
using namespace std;

class friends{
    public:
    char name[20];
    char address[20];
    int phone;

void getData(){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter address:";
    cin>>address;
    cout<<"enter phone:";
    cin>>phone;
}

void showData(){
    cout<<"name:"<<name;
    cout<<"address:"<<address;
    cout<<"phone:"<<phone;
}
};

int main(){
    friends n1,n2,n3;
    n1.getData();
    n2.getData();
    n3.getData();

    cout<<"\nfriend1:";
    n1.showData();

    cout<<"\nfriend2:";
    n2.showData();

    cout<<"\nfriend3:";
    n3.showData();

    return 0;
}