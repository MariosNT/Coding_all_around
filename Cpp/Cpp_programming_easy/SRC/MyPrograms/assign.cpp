//=============================================
// C++ Programming in easy steps 7ed. [2:29]
//=============================================

#include <iostream>
using namespace std ;

int main()
{
  int a, b ;

  cout << "Assign values:  " ;
  cout << "a = " << (a = 8) << "   b = " << (b = 4) ;

  cout << endl << "Add & assign:\t\t" ;
  cout << "a += b (8 += 4 ) a = " << (a += b) ;
  cout << endl << "Subtract & assign:\t" ;
  cout << "a -= b (12 -= 4 ) a = " << (a -= b) ;
  cout << endl << "Multiply & assign:\t" ;
  cout << "a *= b (8 *= 4 ) a = " << (a *= b) ;
  cout << endl << "Divide & assign:\t" ;
  cout << "a /= b (32 /= 4 ) a = " << (a /= b) ;
  cout << endl << "Modulus & assign:\t" ;
  cout << "a %= b (8 %= 4 )  a = " << (a %= b) ;

  return 0 ;
}
