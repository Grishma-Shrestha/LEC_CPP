#include<iostream>
using namespace std;
class time
{
    private:
    int hr,min,sec;
    public:
    time()
    {
        hr=12;
        min=0;
        sec=0;
    }
    time(int x)
    {
        sec=x;
        hr=sec/3600;
        min=(sec%3600)/60;
        sec=(sec%3600)%60;
    }
    time(time &x)
    {
        hr=x.hr;
        min=x.min;
        sec=x.sec;
    }
    void display()
    {
        cout<<hr<<" hr, "<<min<<" min, "<<sec<<" sec"<<endl;
    }
};
int main()
{
    int a;
    cout<<"Enter seconds";
    cin>>a;
    time t1(a),t2;
    t2=t1;
    t2.display();
}