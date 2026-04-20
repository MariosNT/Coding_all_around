//=============================================
// C++ Programming in easy steps 7ed. [7:120-1]
//=============================================

#include <string>
#include <iostream>
using namespace std ;

class Dog
{
  int age = 0, weight = 0 ;
  string color = "unknown" ;

public:
  void bark( ) const { cout << "WOOF!" << endl ; }

  void setValues( int age, int weight, const string& color )
  {
    this -> age = age ;
    this -> weight = weight ;
    this -> color = color ;
  }

  int getAge() { return age ; }
  int getWeight() { return weight ; }
  string getColor() { return color ; }
} ;

int main()
{
  Dog fido ;
  fido.setValues( 3, 15, "brown" ) ;
  cout << "\nFido is a " << fido.getColor() << " dog" << endl ;
  cout << "Fido is " << fido.getAge() << " years old" << endl ;
  cout << "Fido weighs " << fido.getWeight() << " pounds" << endl ;
  fido.bark() ;

  Dog pooch ;
  pooch.setValues( 4, 18, "gray" ) ;
  cout  << "\nPooch is a " 
        << pooch.getAge() << "-year-old " 
        << pooch.getColor() << " dog who weighs " 
        << pooch.getWeight() << " pounds." << endl ;
  pooch.bark() ; 

  return 0 ;
}
