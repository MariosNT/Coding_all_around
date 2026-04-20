//=============================================
// C++ Programming in easy steps 7ed. [2:31]
//=============================================

#include <iostream>
using namespace std ;

int main( )
{
  int nil = 0 , num = 0 , max = 1 ;
  char cap = 'A' , low = 'a' ;

  cout << "Equality comparisons:\t" ;
  cout << "(0 == 0) " << (nil == num) << "(true)  " ;
  cout << "(A == a) " << (cap == low) << "(false)" ;

  cout << endl << "Inequality comparison:\t" ;
  cout << "(0 != 1) " << (nil != max) << "(true)" ;
  cout << endl << "Greater comparison:\t" ;
  cout << "(0 > 1) " << (nil > max) << "(false)" ;
  cout << endl << "Lesser comparison:\t" ;
  cout << "(0 < 1) " << (nil < max) << "(true)" ;
  cout << endl << "Greater or equal comparison:\t" ;
  cout << "(0 >= 0) " << (nil >= num) << "(true)" ;
  cout << endl << "Lesser or equal comparison:\t" ;
  cout << "(1 <= 0) " << (max <= num) << "(false)" ;

  return 0 ;
}
