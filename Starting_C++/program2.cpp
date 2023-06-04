#include<iostream>
using namespace std;

class Room{
    public:
    int length;
    int breadth;
    int height;

    void calculateArea(int a, int b){
        length=a;
        breadth=b;
        cout<<"The area of the room is:"<<length*breadth;
    }
    void calculateVolume(int a, int b, int c){
        length=a;
        breadth=b;
        height=c;
        cout<<"\nThe volume of the room is:"<<length*breadth*height;
    }
};

int main()
{
    Room r;
    
    r.calculateArea(10,20);
    r.calculateVolume(10,20,30);

    return 0;
}