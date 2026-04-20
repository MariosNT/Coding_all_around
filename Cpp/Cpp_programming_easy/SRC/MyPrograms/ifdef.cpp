//=============================================
// C++ Programming in easy steps 7ed. [9:156-7]
//=============================================

#ifndef BOOK
  #define BOOK  "C++ Programming in easy steps"
#endif

#include <iostream>
using namespace std ;

int main()
{
  #ifdef BOOK
    cout << BOOK ;
  #endif

  #ifndef AUTHOR
    #define AUTHOR "Mike McGrath"
    cout << " by " << AUTHOR << endl ;
  #endif

  #ifdef BOOK 
    #undef BOOK 
  #endif

  #ifndef BOOK
    #define BOOK "Linux in easy steps" 
    cout << BOOK ;
    cout << " by " << AUTHOR << endl ;
  #endif

  return 0 ;
}
