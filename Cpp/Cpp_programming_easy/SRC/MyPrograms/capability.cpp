//=============================================
// C++ Programming in easy steps 7ed. [8:140-1]
//=============================================

#include <iostream>
using namespace std ;

class Bird
{
  public :
  virtual int Talk() const { return -1 ; }
  virtual int Fly()  const { return -1 ; }
  virtual ~Bird() = default;
} ;

class Pigeon : public Bird
{
  public:
    virtual int Talk() const override
    { cout << endl << "Coo! Coo!" << endl ; return 0 ; }
  
    virtual int Fly()  const
    { cout << endl << "A pigeon flies away..." << endl ; return 0 ; }
} ;

class Chicken : public Bird
{
  public:
    virtual int Talk() const override
    { cout << "Cluck! Cluck!" << endl ; return 0 ; }

    virtual int Fly()  const override
    { cout << "I'm just a chicken - I can't fly!" << endl ; return 0 ; }
} ;

int main()
{
  Bird* pPigeon = new Pigeon ;
  Bird* pChicken = new Chicken ;

  if( !pPigeon || !pChicken )
  {
    cout << "Error! - Program ends." << endl ; 
    delete pPigeon; delete pChicken;
    return 1 ;
  }
  pPigeon -> Talk() ; pChicken -> Talk() ;
  pPigeon -> Fly() ;  pChicken -> Fly() ;
  delete pPigeon; delete pChicken;
  return 0 ;  
}
