//=============================================
// C++ Programming in easy steps 7ed. [3:44-45]
//=============================================

#include <iostream>
using namespace std ;

int main()
{
  const char LETTER = 'A' ;
  int num = 8 ;

  if( num > 5 )
  { 
    cout << "Number exceeds five" << endl ;
    if( LETTER == 'A' )
    {
      cout << "Letter is A" << endl ;
    }
  }
  else
  { 
    cout << "Number is five or less" << endl ;
  }

  return 0 ;
}
