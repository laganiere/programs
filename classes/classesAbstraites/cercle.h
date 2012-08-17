
#ifndef CERCLE_H
#define CERCLE_H

#define PI 3.1415926535897932384626433832795

#include "forme.h"

#include <iostream>
#include <math.h>

using namespace std;

class Cercle: public Forme {
    double rayon;

public:
    Cercle(double x, double y, double rayon):
            Forme(x, y), rayon(rayon) { }

    Cercle(double rayon): Forme(), rayon(rayon) { }

    Cercle(const Cercle &c) {
        setAncrage(c.getAncrage()), rayon = c.rayon;
    }

    double getPerimetre() const {
        return 2*PI*rayon;
    }

    double getAire() const {
        return PI*pow(rayon, 2);
    }

    double getRayon() const {
        return rayon;
    }

    void setRayon(double rayon) {
        this->rayon = rayon;
    }

    virtual void getLimites(Point2D &p1, Point2D &p2) {
        p1.setX(getAncrage().getX() - rayon);
        p1.setY(getAncrage().getY() - rayon);
        p2.setX(getAncrage().getX() + rayon);
        p2.setY(getAncrage().getY() + rayon);
    }


    string toString() { // redéfinition
        std::stringstream ss;
        ss << "Cercle (" << rayon << ")";
        return ss.str() + Forme::toString();
    }

};

#endif // CERCLE_H
