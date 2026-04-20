//=============================================
// C++ Programming in easy steps 7ed. [7:122-3]
//=============================================

#include <string>
#include <iostream>
using namespace std ;

class Dog
{
  int age, weight ;
  string color ;

  public:
      
    Dog(int age, int weight, const string& color)
          : age(age), weight(weight), color(color) { }

    ~Dog()
    {
      cout << "Object destroyed." << endl;
    }
    
    int getAge() const { return age ; }
    int getWeight() const { return weight ; }
    string getColor() const { return color ; }

    void bark() const { cout << "WOOF!" << endl; }
} ;


int main()
{
  Dog fido( 3, 15, "brown" ) , pooch(4, 18, "gray");

  cout  << "Fido is a " 
        << fido.getAge() << "-year-old "
        << fido.getColor() << " dog who weighs "
        << fido.getWeight() << " pounds. " ;
  fido.bark() ;

  cout << "Pooch is a "
      << pooch.getAge() << "-year-old "
      << pooch.getColor() << " dog who weighs "
      << pooch.getWeight() << " pounds. " ;
  pooch.bark() ;

  cout << "\nProgram ends." << endl ;
  return 0 ;
}
