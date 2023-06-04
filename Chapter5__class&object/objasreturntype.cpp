#include<iostream>
using namespace std;

class Example{
    public:
    int a;

    Example add(Example Ea, Example Eb){
        Example Ec;
        Ec.a=Ea.a+Eb.a;

        return Ec;
    }
};

int main(){
    Example E1,E2,E3;

    E1.a=45;
    E2.a=34;
    E3.a=0;

    E3=E3.add(E1, E2);

    cout<<"\nThe values are:";
    cout<<"\nObject1:"<<E1.a;
    cout<<"\nObject2:"<<E2.a;
    cout<<"\nObject3:"<<E3.a;

    return 0;
}
