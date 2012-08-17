
#ifndef CERCLE_H
#define CERCLE_H

#define PI 3.1415926535897932384626433832795

#include "point2D.h"

#include <iostream>
#include <math.h>

using namespace std;

class Cercle: public Point2D {
    double rayon;

public:
    Cercle(double x, double y, double r):
                        Point2D(x, y), rayon(r) { }

    Cercle(double r): Point2D(), rayon(r) { }

    // Il est optionnel d'écrire virtual.
    virtual double getPerimetre() const {
        return 2*PI*rayon;
    }

    virtual double getArea() const {
        return PI*pow(rayon, 2);
    }

    double getRayon() const {
        return rayon;
    }

    void setRayon(double r) {
        rayon = r;
    }

};

#endif // CERCLE_H

