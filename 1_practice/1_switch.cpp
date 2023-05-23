#include<iostream>
using namespace std;

int main(){
    int choice;
    cout<<"Enter choice 1,2 or 3";
    cin>>choice;

    switch(choice){
        case 1:
        case 2:
        case 3:
    
        cout<<"choice is valid\n";
        break;

        default:
        cout<<"invalid choice\n";
    }
}