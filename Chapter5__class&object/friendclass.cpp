#include<iostream>
using namespace std;

class temp1{
    private:
    int x=5;

    friend class temp2;
};

class temp2{
    public:
    void display(temp1 &a){
        cout<<"value of x is:"<<a.x;
    }
};

int main(){
    temp1 a;
    temp2 b;
    b.display(a);
    return 0;
}