#include<iostream>
using namespace std;

class complex{
    private:
    float real;
    float imag;

    public:
    complex(){
        real=0;
        imag=0;
    }

    complex(float re, float im){
        real=re;
        imag=im;
    }

    void getValue(){
        cout<<"\nEnter real part:";
        cin>>real;
        cout<<"Enter imaginary part:";
        cin>>imag;
    }

    void showValue(){
        cout<<"("<<real<<", "<<imag<<")";
    }

    complex add(complex cc2){
        complex result;
        result.real=real+cc2.real;
        result.imag=imag+cc2.imag;
        return result;
    }
};

int main(){
    complex c1,c2(4.2,5.3),c3;
    c1.getValue();
    
    c3=c1.add(c2);
    c1.showValue();
    cout<<"+";
    c2.showValue();
    cout<<"=";
    c3.showValue();
}