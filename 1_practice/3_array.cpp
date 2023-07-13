#include<iostream>
using namespace std;

int main(){
    string subject[]={"TOC","OOP","DL","EDC","ECT"};           

    int i;
    int marks[5];
    int total=0;

    for(i=0;i<5;i++){
        cout<<"enter marks for subject "<<subject[i];
        cin>>marks[i];
    }

    for(i=0;i<5;i++){
        total=total+marks[i];
    }
        cout<<"the marks is"<<total;
    return 0;
}