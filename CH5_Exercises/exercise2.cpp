//iteminfo.cpp
//am example of class

#include<iostream>
using namespace std;

class itemInfo  //class class_name
{
    private:        //setData and showData can only access this function
    int itemId;
    float cost;

    public:
    void setData(int it, int cst)
    {
        itemId=it;
        cost=cst;
    }
    void showData()
    {
        cout<<"\n Item ID:"<<itemId;
        cout<<"\n Cost:"<<cost;
    }
};
    int main()
    {
        itemInfo i1,i2;
        i1.setData(55,35.50);
        i2.setData(555,135.25);

        cout<<"\nInformation on first item:";
        i1.showData();

        cout<<"\nInformation on second item:";
        i2.showData();

        return 0;
    }