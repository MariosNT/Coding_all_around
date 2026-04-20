//=============================================
// C++ Programming in easy steps 7ed. [8:134-5]
//=============================================

#include <iostream>
using namespace std ;

class Base
{
  public:
    void Identify( const void* adr ) const
    {
      cout << "Base class method called by pointer at : "
            << hex << adr << endl ;
    }
} ;

class SubA : public Base { } ;
class SubB : public Base { } ;

int main( )
{
  Base* ptrA = new SubA ;
  Base* ptrB = new SubB ;

  ptrA -> Identify( ptrA ) ;
  ptrB -> Identify( ptrB ) ;

  delete ptrA, ptrB;

  return 0;
}
