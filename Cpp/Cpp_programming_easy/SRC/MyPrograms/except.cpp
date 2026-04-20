//=============================================
// C++ Programming in easy steps 7ed. [5:94-95]
//=============================================

#include <stdexcept>    // Support standard exceptions.
#include <typeinfo>     // Support type information.
#include <fstream>
#include <string>
#include <iostream>
using namespace std ;

int main( )
{
  string lang =  "C++" ;
  int num = 1000000000; // One billion.

  try
  {
      // lang.replace( 100, 1, "C" ) ;
      
      // Replacement statement in try block (step 5).
      // lang.resize( 3 * num ) ;
      
      // Replacement statements in try block (step 8).
      ifstream reader( "absent.txt" ) ;
      if( ! reader ) throw logic_error("File not found" ) ;

  
  }
  catch( out_of_range &e )
  {
    cerr << "Range Exception: " << e.what( ) << endl ;
    cerr << "Exception Type: " << typeid( e ).name() ;
    cout << endl << "Program terminated." << endl ;
    return -1 ;
  }
  catch( exception &e )
  {
    cerr << "Exception: " << e.what() << endl ;
    cerr << "Exception Type: " << typeid( e ).name() << endl ;
  }
  
  cout << "Program continues..." << endl ;

  return 0 ;
}
