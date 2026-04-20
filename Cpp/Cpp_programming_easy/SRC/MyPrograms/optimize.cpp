//=============================================
// C++ Programming in easy steps 7ed. [3:58-59]
//=============================================

#include <iostream>
using namespace std ;

int computeFactorials( int, int ) ;

/* Call original...
int factorial( int ) ;
*/

// Optimized....
inline int factorial( int n )
{ return ( n == 1 ) ? 1 : ( factorial( n - 1 ) * n ); }

int main()
{
  computeFactorials( 1, 8 ) ;
  return 0 ;
}

int computeFactorials( int num, int max )
{
  cout << "Factorial of " << num << ": " ;
  cout << factorial( num ) << endl ;  // Statements.
  num++ ;  // Incrementer.
  if( num > max ) return 0 ;
  else return computeFactorials( num , max ) ;  // Exit or call again.
}

/* Original...
int factorial( int n )
{
  int result ;
  if( n == 1 ) result = 1 ;
  else result = ( factorial( n - 1 ) * n );
  return result ;
}
*/
