//=============================================
// C++ Programming in easy steps 7ed. [3:50-51]
//=============================================

#include <vector>
#include <iostream>
using namespace std ;

int main()
{

  vector <int> vec(10) ;
  int i = 0 ; 

  while ( i < vec.size() )
  {
    i++ ; // Increment the counter.

    //if ( i == 3 ) { cout << " | Skipped" ; continue ; }

    //if ( i == 8 ) { cout << endl << "Done" ; break ; }

    vec[ i-1 ] = i ; // Assign count to element.

    cout << " | " << vec.at( i-1 ) ;
  }

  return 0 ;
}
