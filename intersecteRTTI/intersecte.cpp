
#include <iostream>
#include <typeinfo>
#include "intersecte.h"
#include "triangle.h"
#include "rectangle.h"
#include "carre.h"

using namespace std;

bool intersecte(Forme& s1, Forme& s2) {
    if (typeid(s1) == typeid(Triangle)) {
        if (typeid(s2) == typeid(Triangle))
            return triangleTriangle(dynamic_cast<Triangle&>(s1),
                             dynamic_cast<Triangle&>(s2));

        else if (typeid(s2) == typeid(Carre))
            return triangleCarre(dynamic_cast<Triangle&>(s1),
                             dynamic_cast<Carre&>(s2));
        else if (typeid(s2) == typeid(Rectangle))
            return triangleRectangle(dynamic_cast<Triangle&>(s1),
                             dynamic_cast<Rectangle&>(s2));
    }
    else if (typeid(s1) == typeid(Carre)) {
        if (typeid(s2) == typeid(Triangle))
            return carreTriangle(dynamic_cast<Carre&>(s1),
                             dynamic_cast<Triangle&>(s2));

        else if (typeid(s2) == typeid(Carre))
            return carreCarre(dynamic_cast<Carre&>(s1),
                             dynamic_cast<Carre&>(s2));
        else if (typeid(s2) == typeid(Rectangle))
            return carreRectangle(dynamic_cast<Carre&>(s1),
                             dynamic_cast<Rectangle&>(s2));
    }
    else if (typeid(s1) == typeid(Rectangle)) {
        if (typeid(s2) == typeid(Triangle))
            return rectangleTriangle(dynamic_cast<Rectangle&>(s1),
                             dynamic_cast<Triangle&>(s2));

        else if (typeid(s2) == typeid(Carre))
            return rectangleCarre(dynamic_cast<Rectangle&>(s1),
                             dynamic_cast<Carre&>(s2));
        else if (typeid(s2) == typeid(Rectangle))
            return rectangleRectangle(dynamic_cast<Rectangle&>(s1),
                             dynamic_cast<Rectangle&>(s2));
    }

}

bool triangleTriangle(Triangle& s1, Triangle& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << "Le " << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec le " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec le " << s2.toString() << endl;
    return true;
}

bool triangleRectangle(Triangle& s1, Rectangle& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << "Le " << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec le " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec le " << s2.toString() << endl;
    return true;
}

bool triangleCarre(Triangle& s1, Carre& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << "Le " << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec le " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec le " << s2.toString() << endl;
    return true;
}

bool rectangleRectangle(Rectangle& s1, Rectangle& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << "Le " << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec le " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec le " << s2.toString() << endl;
    return true;
}

bool rectangleCarre(Rectangle& s1, Carre& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << "Le " << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec le " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec le " << s2.toString() << endl;
    return true;
}

bool rectangleTriangle(Rectangle &s1, Triangle &s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << "Le " << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec le " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec le " << s2.toString() << endl;
    return true;
}

bool carreCarre(Carre& s1, Carre& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << "Le " << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec le " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec le " << s2.toString() << endl;
    return true;
}

bool carreRectangle(Carre& s1, Rectangle& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << "Le " << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec le " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec le " << s2.toString() << endl;
    return true;
}

bool carreTriangle(Carre& s1, Triangle& s2) {
    Point2D s1a, s1b;
    Point2D s2a, s2b;
    s1.getLimites(s1a, s1b);
    s2.getLimites(s2a, s2b);

    cout << "Le " << s1.toString();

    if ((s1a.getX() < s2a.getX() && s1b.getX() < s2a.getX()) ||
        (s1a.getY() < s2a.getY() && s1b.getY() < s2a.getY()) ||
        (s1a.getX() > s2b.getX() && s1b.getX() > s2b.getX()) ||
        (s1a.getY() > s2b.getY() && s1b.getY() > s2b.getY())) {
        cout << " n'intersecte pas avec le " << s2.toString() << endl;
                return false;
            }
    cout << " intersecte avec le " << s2.toString() << endl;
    return true;
}


