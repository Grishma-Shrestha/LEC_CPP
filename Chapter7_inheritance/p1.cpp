#include<iostream>
using namespace std;

class Parent
{
    private:
    int id_private;
    protected:
    int id_protected;
};

class Child : public Parent{
    public:
    void setId(int id)
    {
        id_protected = id;
    }

    void showdata()
    {
        cout<<id_protected;
    }
};
int main()
{
    Parent p1;
    Child c1;

    //p1.id_protected=10;       //only derived class can access protected attributes(not even parent class).So the code causes error
    //c1.id_private=2;         //Private attributes cannot be accessed by anyone outside class not even derived class.
                            //thus this code also causes error.
   
   
   
    c1.setId(2);
    c1.showdata();
    //p1.id=5;
    return 0;
}