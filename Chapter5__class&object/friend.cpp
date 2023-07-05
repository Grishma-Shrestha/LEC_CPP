#include <iostream>
using namespace std;

class Sample{
    float mean;
    friend float mean (Sample s);      //friend le private members access garna payo

    private:
    float num1, num2;

    public:
    void getdata(){
        float a,b;
        cout<<"Input data:"<<endl;
        cin>>a>>b;
        num1=a;
        num2=b;   
    }
};

float mean(Sample s)//object as parameter
{
    float m;
    m=(s.num1+s.num2)/2;
    return m;
}

int main()
{
    Sample s;
    s.getdata();
    cout<<"mean="<<mean(s);

}
