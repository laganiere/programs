
#include <iostream>
#include "rectangle.h"
#include "carre.h"
#include "triangle.h"

using namespace std;

int main()
{
    Rectangle r(3, 4, 4, 4);
    Carre c(4, 4, 3);
    Triangle t(2, 2, 2, 2, 2);
    Rectangle r2(10, 10, 2, 2);

    std::cout << "Intersections des formes:" << std::endl;
    r.intersecte(c);  // appel directe aux methodes
    r.intersecte(r2);
    t.intersecte(r);

    // creation de references
    Forme &f1(c);
    Forme &f2(r);

    std::cout << std::endl;
    std::cout << "Intersections des formes (avec references):" << std::endl;
    f1.intersecte(r);
    c.intersecte(f2);
    f1.intersecte(f2);

    return 0;
}

/*----------------- resultat ----------------------*\
Intersections des formes:
Rectangle (4x4) au point (3, 4) intersecte avec Carre (3x3) au point (4, 4)
Rectangle (4x4) au point (3, 4) n'intersecte pas avec Rectangle (2x2) au point (10, 10)
Triangle (1.73205x2) au point (2, 2) n'intersecte pas avec Rectangle (4x4) au point (3, 4)

Intersections des formes (avec references):
Rectangle (4x4) au point (3, 4) intersecte avec Carre (3x3) au point (4, 4)
Rectangle (4x4) au point (3, 4) intersecte avec Carre (3x3) au point (4, 4)
Rectangle (4x4) au point (3, 4) intersecte avec Carre (3x3) au point (4, 4)
\*-------------------------------------------------*/


