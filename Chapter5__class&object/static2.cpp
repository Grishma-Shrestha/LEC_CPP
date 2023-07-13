#include<iostream>
  using namespace std;
  
class MyClass {
public:
  static int myStaticVariable;
};

int MyClass::myStaticVariable = 0;  // Initialization of the static variable

int main() 
{
  MyClass obj1;
  MyClass obj2;

  obj1.myStaticVariable = 5;
  cout << obj2.myStaticVariable;  // Output: 5

  return 0;
  }
// #include<iostream>
//   using namespace std;
  
//   class account
//   {
//     private:
//     int balance;
//     static float roi;//static member variable
//     public:
//     int setvalue(int b)
//     {
//         balance=b;
//     }
//     static float setroi(float r)//static member function  //static matra access
//     {
//         roi =r;
//     }
//   };
//   float account ::roi;//yo na lekhda memory bandaina zero na diye by default zero 

//   int main()
//   {
//     //account a1;
//    account::setroi=(4.5); //private na huda//bina obj call
//    //a1.setroi(4.5);
//    return 0;
//   }