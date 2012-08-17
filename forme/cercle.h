
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
    Cercle(double x, double y, double r): Point2D(x, y), rayon(r) { }
    Cercle(double r): Point2D(), rayon(r) { }

    double getPerimetre() const {
        return 2*PI*rayon;
    }
    double getAire() const {
        return PI*pow(rayon, 2);
    }

    double getRayon() const {
        return rayon;
    }

    void setRayon(double r) {
        rayon = r;
    }

    void getBoundaries(double &x1, double &y1, double &x2, double &y2) {
        x1 = this->getX() - rayon;
        y1 = this->getY() - rayon;
        x2 = this->getX() + rayon;
        y2 = this->getY() + rayon;
    }

    string toString() { // redéfinition
        std::stringstream ss;
        ss << "Cercle(" << rayon << ")";
        return ss.str() + Point2D::toString();
    }

};

#endif // CERCLE_H
