//=============================================
// C++ Programming in easy steps 7ed. [2:39]
//=============================================

#include <iostream>
using namespace std ;

int main()
{
  // Multiply, add default precedence.
  int num = 1 + 4 * 3 ;
  cout << endl << "Default order:  " << num ;

  // Forced precedence.
  num = ( 1 + 4 ) * 3 ;
  cout << "\tForced order:  " << num << endl << endl ;

  // Left to right default direction.
  num = 7 - 4 + 2 ;
  cout<< "Default direction: " << num ;

  // Forced direction.
  num = 7 - ( 4 + 2 ) ;
  cout << "\tForced direction: " << num << endl ;

  return 0 ;
}
