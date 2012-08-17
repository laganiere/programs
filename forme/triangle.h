#ifndef TRIANGLE_H // si TRIANGLE_H n<est pas défini
#define TRIANGLE_H // définir TRIANGLE_H

#include "point2D.h"
#include <math.h>


class Triangle : public Point2D{
private: // privé par défaut, il n'est pas nécessaire de l'indiquer
    static int numberOfTriangles;

    double base, cote1, cote2;
    // cette variable peut être changée lors d'un appel à une méthode const
    mutable double area;

public:
    static int getNumberOfTriangles() {return numberOfTriangles; }

    Triangle(): Point2D(), base(0), cote1(0), cote2(0) { }

    Triangle(double x, double y, double b, double c1, double c2) :
                Point2D(x, y), base(b), cote1(c1), cote2(c2) {
        numberOfTriangles++;
    }

    Triangle(double b, double c1, double c2) :
            Point2D(), base(b), cote1(c1), cote2(c2) {
        numberOfTriangles++;
    }

    // le const qui figure dans les méthodes get suivantes
    // préviennent la modification des attributs par la méthode.
    double getBase() const {
        return base;
    }

    void setBase(double b) {
        base = b;
    }

    double getCote1() const {
        return cote1;
    }

    void setCote1(double c1) {
        cote1 = c1;
    }

    double getCote2() const {
        return cote2;
    }

    void setCote2(double c2) {
        cote2 = c2;
    }

    double getPerimetre() const {
        return base+ cote1+cote2;
    }
    double getAire() const {
        double p = getPerimetre();
        double area = 1/4*sqrt(p*(p-2*base)*(p-2*cote1)*(p-2*cote2));
        return area;
    }

    // assuming the triangle has no angle > 90
    void getBoundaries(double &x1, double &y1, double &x2, double &y2) {
        x1 = this->getX();
        y1 = this->getY();
        x2 = this->getX() + base;
        y2 = this->getY() + 2*getAire()/base;
    }

    string toString() { // redéfinition
        std::stringstream ss;
        ss << "Triangle(" << base << "x" << cote1 << "x" << cote2 << ")";
        return ss.str() + Point2D::toString();
    }
};

#endif // TRIANGLE_H
