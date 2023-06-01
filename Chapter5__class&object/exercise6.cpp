//ohjasphyobj.cpp
//C++ objects as physical objects

#include<iostream>
#include<cstring>
using namespace std;
class product
{
    private:
    int productId;
    char name[15];
    float cost;

    public:
    void setData(int pid, char pname[], float cst)
    {
        productId=pid;
        strcpy(name,pname);
        cost=cst;
    }
    void showData()
    {
        cout<<"\nProduct ID:"<<productId;
        cout<<"\nName:"<<name;
        cout<<"\nCost:"<<cost;
    }
};

int main()
{
    product p1,p2;
    p1.setData(944, "CD-ROM", 1500.00);
    p2.setData(945, "Pen Drive", 1000.00);
    p1.showData();
    p2.showData();

    return 0;
}
