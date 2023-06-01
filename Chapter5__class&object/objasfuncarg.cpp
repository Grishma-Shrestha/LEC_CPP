#include<iostream>
using namespace std;

class student
{
    public:
    double marks;          ///same name as class name
    int m;
    student(double m){
        marks=m;
    }

};

void calculateAvg(student s1, student s2)
{
    double avg=(s1.marks+s2.marks)/2;
    cout<<avg;
}

int main()
{
    student s1(100),s2(200);
    calculateAvg(s1,s2);
    return 0;
}



