//=============================================
// C++ Programming in easy steps 7ed. [8:148]
//=============================================

#include "ops.h"
#include <iostream>
using namespace std ;

Calculator::Calculator() { status = true ; }

void Calculator::launch()
{
  cout  << "*** SUM CALCULATOR ***\n"
        << "Enter a number, an operator(+,-,*,/) "
        << "and another number.\n" 
        << "Hit Return to calculate. Enter 0 to exit.\n" ;
}

void Calculator::readInput()
{
  cout << "> " ; cin >> num1 ;          // Get 1st number.
  if( num1 == 0 ) status = false ;      // Exit if it's 0.
  else { cin >> oper ; cin >> num2 ; }  // Or get the rest.
}

void Calculator::writeOutput()          // Display result.
{
  if (status) switch(oper)              // If continuing.
  {                                     // Show result.
    case '+' : cout << ( num1 + num2 ) << endl ; break ;
    case '-' : cout << ( num1 - num2 ) << endl ; break ;
    case '*' : cout << ( num1 * num2 ) << endl ; break ;
    case '/' : if( num2 != 0 ) cout << ( num1 / num2 ) << endl ;
             else cout << "Cannot divide by zero" << endl; 
        break;
    default: cout << "Invalid operator." << endl;
  }
}

bool Calculator::run() const { return status ; }
