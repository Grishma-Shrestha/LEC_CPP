#include <iostream>
using namespace std;

// class declaration
class Wall {
  private:
    double length;
    double height;

  public:
    Wall(){ //default constructor

    }
    // initialize variables with parameterized constructor
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    // copy constructor with a Wall object as parameter copies data of the obj parameter
    Wall(Wall &obj) {   
      length=obj.length;
      height=obj.height;        //here wall is constructor and (wall &obj) bhaneko wall class ma euta object banako jasle address lincha
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create an object of Wall class
  Wall wall1(2.2, 83.6);

  // copy contents of wall1 to wall2
  Wall wall2 = wall1;

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea()<<endl;
  cout << "Area of Wall 2: " << wall2.calculateArea()<<endl;

  return 0;
}