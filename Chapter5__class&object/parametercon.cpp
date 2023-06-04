#include<iostream>
using namespace std;
 
class sathiharu {
    public: 
        string name;
        string addresss;
        int age;
 
    public:
    sathiharu(string naam, string addr, int umer)
    {
        cout<<"constructor call bhayo ta?";
    }
        void ghumeprogram() {
            cout<<"Oi Espali ghumna jaam bujhis "<<name<<" umm "
            <<age<<"ko umer ma hike garna sakinchha masta. ka jane hola ta "
            <<addresss<<" jada thik hola?";
        }
};
 
int main() {
    sathiharu firstfriend("gs", "bansh", 19), secondfriend("ts", "durbar", 20)
    // firstfriend.name = "enzela";
    // firstfriend.age = 22;
    // firstfriend.addresss = "Pilotbaba";
    // firstfriend.ghumeprogram();
 
//     secondfriend.name = "enzela2";
//     secondfriend.age = 20;
//     secondfriend.addresss = "pilotbaba";
//     secondfriend.ghumeprogram();
 
}

