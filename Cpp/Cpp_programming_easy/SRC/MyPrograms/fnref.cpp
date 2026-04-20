//=============================================
// C++ Programming in easy steps 7ed. [6:110-1]
//=============================================

#include <iostream>
using namespace std ;

void writeOutput( int& ) ;
void computeTriple( int& ) ;

int main()
{
  int num = 5 ;

  int& ref = num ;
  writeOutput( ref ) ;

  ref += 15 ;           // Add and assign a referenced value.
  writeOutput( ref ) ;

  computeTriple( ref ) ;
  writeOutput( ref ) ;

  return 0 ;
}

void writeOutput( int& value )
{
  cout << "Current value: " << value << endl ;
}

void computeTriple( int& value)
{
  value *= 3 ;          // Multiply and assign a referenced value.
}
