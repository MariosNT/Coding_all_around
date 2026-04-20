//=============================================
// C++ Programming in easy steps 7ed. [8:136-7]
//=============================================

#include <iostream>
using namespace std ;

class Parent
{
  public:
    void Common() const { cout << "I am part of this family, " ; }
    virtual void Identify() const { cout << "I am the parent" << endl ; }
} ;

class Child : public Parent
{
  public :
    void Identify() const override { cout << "I am the child" << endl ; }
} ;

class Grandchild : public Child
{
  public :
    void Identify() const override { cout << "I am the grandchild" << endl ; }
    void Relate() const { cout << "Grandchild has parent and grandparent" << endl ; }
} ;

int main()
{
  Child son ;
  Grandchild grandson ;
  Parent* ptrChild = &son ;
  Parent* ptrGrandchild = &grandson ;

  ptrChild -> Common() ;
  ptrChild -> Identify( ) ;
  ptrGrandchild -> Common() ;
  ptrGrandchild -> Identify( ) ;
  ptrChild -> Parent::Common() ;        // For clarity only.
  ptrChild -> Parent::Identify( ) ;       // For clarity only.
  grandson.Relate() ;

  return 0 ;
}
