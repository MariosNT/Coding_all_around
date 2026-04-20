//=============================================
// C++ Programming in easy steps 7ed. [7:118-9]
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

    void setAge( int yrs ) { age = yrs ; }
    void setWeight( int lbs ) { weight = lbs ; }
    void setColor( const string& hue ) { color = hue ; }
    
    int getAge( ) const{ return age ; }
    int getWeight( ) const { return weight ; }
    string getColor( ) const { return color ; }
} ;

int main()
{
  Dog fido ;

  fido.setAge( 3 ) ;
  fido.setWeight( 15 ) ;
  fido.setColor( "brown" ) ;

  cout << "\nFido is a " << fido.getColor() << " dog" << endl ;
  cout << "Fido is " << fido.getAge() << " years old" << endl ;
  cout << "Fido weighs " << fido.getWeight() << " pounds" << endl ;

  fido.bark() ;

  return 0 ;
}
