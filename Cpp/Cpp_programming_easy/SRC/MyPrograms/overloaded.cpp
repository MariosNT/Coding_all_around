//=============================================
// C++ Programming in easy steps 7ed. [7:124-5]
//=============================================

#include <string>
#include <iostream>
using namespace std ;

class Dog
{
  int age, weight ;
  string color ;

  public:

    Dog( ) : age(1), weight(2), color("black") {}

    Dog(int age, int weight) 
        : age(age), weight(weight), color("white") {}
     
    Dog(int age, int weight, const string& color)
          : age(age), weight(weight), color(color) { }

    ~Dog()
    {
      cout << "Object destroyed." << endl;
    }
    
    int getAge() const { return age ; }
    int getWeight() const { return weight ; }
    string getColor() const { return color ; }

    void bark(const string& noise) const { cout << noise << endl ; }
    
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

  Dog rex;
  cout << "Rex is a "
      << rex.getAge() << "-year-old "
      << rex.getColor() << " dog who weighs "
      << rex.getWeight() << " pounds. ";
  
  rex.bark("GRRR!");

  Dog sam(2, 6); 
  cout << "Sam is a "
      << sam.getAge() << "-year-old "
      << sam.getColor() << " dog who weighs "
      << sam.getWeight() << " pounds. ";
  
  sam.bark("BOWOW!");

  cout << "\nProgram ends." << endl ;
  return 0 ;
}
