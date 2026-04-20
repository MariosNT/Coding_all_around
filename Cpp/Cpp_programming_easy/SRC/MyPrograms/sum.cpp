//=============================================
// C++ Programming in easy steps 7ed. [8:149]
//=============================================

#include "ops.h"

int main()
{
  Calculator calc ;
  calc.launch() ;

  while ( calc.run() )
  {
    calc.readInput() ;
    calc.writeOutput() ;
  }

  return 0 ;
}
