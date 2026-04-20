//=============================================
// C++ Programming in easy steps 7ed. [7:126-7]
//=============================================

#include <iostream>
using namespace std ;

class Polygon
{
  protected:
    int width = 0, height = 0 ;
  public:
    void setValues( int w, int h ) { width = w ; height = h ; }
} ;

class Rectangle: public Polygon
{
  public:
    int area() const { return ( width * height ) ; }
} ;

class Triangle: public Polygon
{
  public:
    int area() const { return ( ( width * height ) / 2 ) ; }
} ;

int main()
{
  Rectangle rect ; Triangle trgl ;

  rect.setValues( 4, 5 ) ;
  trgl.setValues( 4, 5 ) ;

  cout << "Rectangle area : " << rect.area() << endl ;
  cout << "Triangle area : " << trgl.area() << endl ;

  return 0 ;
}
