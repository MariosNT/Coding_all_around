//=============================================
// C++ Programming in easy steps 7ed. [3:54-55]
//=============================================

#include <iostream>
using namespace std ;

float fToC( float degreesF = 32.0 ) ;

int main()
{
  float fahrenheit, celsius ;

  cout << "Enter a Fahrenheit temperature: " ;
  cin >> fahrenheit ;

  celsius = fToC( fahrenheit ) ;

  cout << fahrenheit << "F is " << celsius << "C" ;
  cout << endl << "Freezing point: " << fToC() << "C" ;

  cout << endl ;
  return 0 ;
}

float fToC( float degreesF )
{
  float degreesC = ( (5.0 / 9.0 ) * ( degreesF - 32.0 ) ) ;
  return degreesC ;
}
