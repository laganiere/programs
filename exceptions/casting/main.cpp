
#include <iostream>

#include "forme.h"
#include "triangle.h"
#include "rectangle.h"

int main()
{
    Forme *f1= new Triangle(5);
 
    Rectangle *r1;
    // En cas d'erreur, r1 = 0
    r1 = dynamic_cast<Reactangle*>(f1);
	
    Triangle t2(8);
    Forme& f2(t2);	
	
 try
  {
    // En cas d'erreur, un bad_cast_exception est lancé
    Rectangle& r2 = dynamic_cast<Rectangle&>(f2);
  }
  catch (std::bad_cast& bc)
  {
     std::cerr << "bad_cast caught: " << bc.what() << '\n';
  }
}
