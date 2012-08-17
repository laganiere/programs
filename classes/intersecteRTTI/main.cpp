
#include <iostream>
#include "rectangle.h"
#include "carre.h"
#include "triangle.h"

using namespace std;

int main()
{
    Rectangle r(2, 2, 4, 4);
    Carre c(4, 4, 3);
    Triangle t(2, 2, 2, 2, 2);
    Rectangle r2(10, 10, 2, 2);

    intersecte(r, c);
    intersecte(r, r2);
    intersecte(t, r);

    /*************************Résultat************************\
     Le Rectangle (4x4) Ancrée au point (2, 2)
     intersecte avec le Carre (3x3) Ancrée au point (4, 4)

     Le Rectangle (4x4) Ancrée au point (2, 2)
     n'intersecte pas avec le Rectangle (2x2)
     Ancrée au point (10, 10)

     Le Triangle (2x1.73205) Ancrée au point (2, 2)
     intersecte avec le Rectangle (4x4) Ancrée au point (2, 2)
    \*********************************************************/
}

