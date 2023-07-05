#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int getnum(){
  int x;
  cout<<"Enter the number:";
  cin>>x;
  return x;
}

int main(){

  int x,y;
  x=getnum();
  y=getnum();
  cout<<"The values before swap are:"<<x<<y;
  swap(&x,&y);
  cout<<"\nThe values after swap are:"<<x<<y;
  
  return 0; 
}

