//=============================================
// C++ Programming in easy steps 7ed. [8:138-9]
//=============================================

#include <iostream>
using namespace std ;

class Bird
{
  public :
    virtual void Talk() const { cout << "A bird talks..." << endl ; }
    virtual void Fly()  const { cout << "A bird flies..." << endl ; }
    virtual ~Bird() = default; // Add a virtual destructor
} ;

class Pigeon : public Bird
{
  public:
    virtual void Talk() const override
    { cout << endl << "Coo! Coo!" << endl ; }

    virtual void Fly()  const override
    { cout << "A pigeon flies away..." << endl ; }
} ;

class Chicken : public Bird
{
  public:
    virtual void Talk() const override
    { cout << endl << "Cluck! Cluck!" << endl ; }

    virtual void Fly()  const override
    { cout << "I'm just a chicken - I can't fly!" << endl ; }
} ;

int main()
{
  Bird* pPigeon = new Pigeon ;
  Bird* pChicken = new Chicken ;

  pPigeon -> Talk() ;
  pPigeon -> Fly() ;
  pChicken -> Talk() ;
  pChicken -> Fly() ;
  //pPigeon ->  Bird::Talk() ;
  //pChicken -> Bird::Fly() ;

  return 0 ;
}
