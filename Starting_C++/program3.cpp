#include<iostream>
using namespace std;

class Room{
    public:
    int length;
    int breadth;
    int height;

    void calculateArea(){
        cout<<"The area of the room is:"<<length*breadth;
    }
    void calculateVolume(){
        cout<<"\nThe volume of the room is:"<<length*breadth*height;
    }
};

int main()
{
    Room r1;
    cout<<"Enter Information"<<endl;
    cout<<"Enter length:";
    cin>>r1.length;
    cout<<"Enter breadth:";
    cin>>r1.breadth;
    cout<<"Enter height:";
    cin>>r1.height;

    r1.calculateArea();
    r1.calculateVolume();

    return 0;
}
