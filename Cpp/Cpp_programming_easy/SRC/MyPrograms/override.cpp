//=============================================
// C++ Programming in easy steps 7ed. [7:130-1]
//=============================================

#include <string>
#include <iostream>
using namespace std ;

class Man
{
  public :
    void speak() const 
    {
        cout << endl << "Hello!" << endl ;
    }

    void speak( const string& msg ) const
    { 
        cout << msg << endl << endl ; 
    }
} ;

class Hombre : public Man
{
  public :
    void speak( const string& msg ) 
    { cout << msg << endl ; }
} ;

int main()
{
  Man henry ;
  Hombre enrique ;

  henry.speak() ;
  henry.speak( "It's a beautiful evening." ) ;

  enrique.speak( "Hola!" ) ;
  
  enrique.Man::speak( "Es una tarde hermosa." ) ;
  return 0 ;
}
