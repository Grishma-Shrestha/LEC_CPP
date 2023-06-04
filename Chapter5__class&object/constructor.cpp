#include<iostream>
using namespace std;

class Wall{
    private:
    int length;

    public:
    Wall(){                  //has the same name as class and no return type
        length=15;
        cout<<"length="<<length;
    }
};           

int main(){
    Wall W;         //constructor use garda object aafai call huncha
}