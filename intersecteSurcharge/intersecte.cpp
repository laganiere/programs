
#include <iostream>
#include "intersecte.h"
#include "forme.h"
#include "triangle.h"
#include "rectangle.h"
#include "carre.h"

using namespace std;

// ici, pour simplification, nous verifions seulement si les
// limites de chaque forme s'intersectent. Une vraie implementation
// tiendrait compte de la nature de chaque forme.

bool intersecte(const Forme& s1, const Forme& s2) {
    return (s1.getAncrage()).egale(s2.getAncrage()) ? true : false;
}

bool triangleTriangle(const Triangle& s1, const Triangle& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec " << s2.toString() << endl;
    return true;
}

bool triangleRectangle(const Triangle& s1, const Rectangle& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec " << s2.toString() << endl;
    return true;
}

bool triangleCarre(const Triangle& s1, const Carre& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec " << s2.toString() << endl;
    return true;
}

bool rectangleRectangle(const Rectangle& s1, const Rectangle& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec " << s2.toString() << endl;
    return true;
}

bool rectangleCarre(const Rectangle& s1, const Carre& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec " << s2.toString() << endl;
    return true;
}

bool carreCarre(const Carre& s1, const Carre& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec " << s2.toString() << endl;
    return true;
}


