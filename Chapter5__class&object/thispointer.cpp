#include<iostream>
using namespace std;

class A{
    private:
    int x;

    public:
    void getnum(int x){
        this//(arrow) x=x; this le obj1 ko adress dincha
    }

    void shownum(){
        cout<<"The number is:"<<x;
    }   
};

int main(){
    A obj1, obj2;
    obj1.getnum(5);
    obj2.getnum(4);

    obj1.shownum();
    obj2.shownum();
    return 0;
}