//=============================================
// C++ Programming in easy steps 7ed. [7:128-9]
//=============================================

#include <iostream>
using namespace std ;

class Parent
{
  public:
    Parent()  
    {
        cout << endl << 
            "Default Parent constructor called." ;
    }
    
    Parent( int a )
    { 
        cout << endl << 
            "Overloaded Parent constructor called." ;
    }
} ; 

class Daughter: public Parent
{
  public:
      Daughter()
      { cout << endl <<
              "    Derived Daughter class default constructor called.";
        cout << endl ; }
} ;

class Son: public Parent
{
  public:
      Son(int a) : Parent(a)
      {
          cout << endl <<
              "    Derived Son class overloaded constructor called.";
          cout << endl ; }
} ;

int main()
{
  Daughter emma ;
  Son andrew( 1 ) ;

  return 0 ;
}
