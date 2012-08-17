#ifndef TRIANGLE_H // si TRIANGLE_H n'est pas défini
#define TRIANGLE_H // définir TRIANGLE_H

#include "forme.h"
#include <math.h>


class Triangle : public Forme{
private:
    double base, cote1, cote2;

public:
    Triangle(double x, double y, double base,
             double cote1, double cote2) :
                Forme(x, y), base(base), cote1(cote1),
                cote2(cote2) {  }

    Triangle(double base, double cote1, double cote2) :
                Forme(), base(base), cote1(cote1), cote2(cote2) { }

    Triangle(const Triangle &t) {
        setAncrage(t.getAncrage());
        base = t.base, cote1 = t.cote1, cote2 = t.cote2;
    }

    double getBase() const {
        return base;
    }

    void setBase(double base) {
        this->base = base;
    }

    double getCote1() const {
        return cote1;
    }

    void setCote1(double cote1) {
        this->cote1 = cote1;
    }

    double getCote2() const {
        return cote2;
    }

    void setCote2(double cote2) {
        this->cote2 = cote2;
    }

    double getPerimetre() const {
        return base+ cote1+cote2;
    }

    // en prenant pour acquis qu'aucun triangle n'a un angle > 90
    double getAire() const {
        double p = getPerimetre();
        double area = 1/4*sqrt(p*(p-2*base)*(p-2*cote1)
                                                    *(p-2*cote2));
        return area;
    }

    virtual void getLimites(Point2D &p1, Point2D &p2) {
        p1 = getAncrage();
        p2.setX(p1.getX() + base);
        p2.setY(p1.getY() + 2*getAire()/base);
    }

    string toString() { // redéfinition
        std::stringstream ss;
        ss << "Triangle (" << base << "x"
                << cote1 << "x" << cote2 << ")";
        return ss.str() + Forme::toString();
    }
};

#endif // TRIANGLE_H
