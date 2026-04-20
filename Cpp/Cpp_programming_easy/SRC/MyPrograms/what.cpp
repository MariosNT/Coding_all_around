//=============================================
// C++ Programming in easy steps 7ed. [5:92]
//=============================================

#include <string>
#include <iostream>
using namespace std ;

int main()
{
  string lang = "C++" ;

  try { lang.erase( 4 , 6) ; }
  catch( exception &error )
  { cerr << "Exception: " << error.what() << endl ; }

  return 0 ;
}
