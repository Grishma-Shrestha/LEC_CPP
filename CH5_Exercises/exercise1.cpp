#include<iostream>
using namespace std;

class simple
{
    private:            //cannot be accessed from outside except public functions
    int data1;
    int data2;

    public:
    void setData(int d1, int d2)    //assigns value to the private members
    {
        data1=d1;
        data2=d2;
    }
    void showData()         //displays the value of the private data
    {
        cout<<"\ndata1="<<data1;
        cout<<"\ndata2="<<data2;
    }
};

int main()
{
    simple s1,s2;       //object s1 and s2 aka variables
    s1.setData(101, 102);
    s2.setData(201, 202);

    s1.showData();
    s2.showData();

    return 0;
}