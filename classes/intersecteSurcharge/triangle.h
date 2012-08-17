
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <math.h>
#include <string>
#include <sstream>
#include "forme.h"

using namespace std;

class Triangle: public Forme {

private:
        double base, cote1, cote2;
        mutable double aire;
        mutable bool calculee;

        void calculeAire() const {
            double p = getPerimetre();
            aire = 0.25*sqrt(p*(p-2*base)*(p-2*cote1)
                                          *(p-2*cote2));
            calculee= true;
        }

    public:
        Triangle(double x, double y, double base,
                     double cote1, double cote2) :
                        Forme(x, y), base(base), cote1(cote1),
                        cote2(cote2), aire(0), calculee(false) {  }

        Triangle(double base, double cote1, double cote2) :
                    Forme(), base(base), cote1(cote1), cote2(cote2),
                    aire(0), calculee(false) { }

        Triangle(const Triangle &t) {
            setAncrage(t.getAncrage());
            base = t.base, cote1 = t.cote1, cote2 = t.cote2,
            aire = t.aire, calculee = t.calculee;
        }

        double getBase() const {
            return base;
        }

        double getCote1() const {
            return cote1;
        }

        double getCote2() const {
            return cote2;
        }

        double getPerimetre() const {
            return base+ cote1+cote2;
        }

        double getAire() const { if (!calculee) calculeAire();
                                 return aire; }

        double getHauteur() const {
            return 2*getAire()/getBase();
        }

        void getLimites(Point2D &p1, Point2D &p2) {
            p1 = getAncrage();
            p2.setX(getBase());
            p2.setY(getHauteur());
        }

        std::string toString() { // redéfinition
            stringstream ss;
            ss << "Triangle (" << getHauteur() << "x"
                                        << getBase() << ")";
            return ss.str() + Forme::toString();
        }

        bool intersecte(Forme& s1) {
                return s1.intersecte(*this); }
        bool intersecte(Triangle& s1) {
                return triangleTriangle(*this, s1);}
        bool intersecte(Rectangle& s1) {
                return triangleRectangle(*this, s1);}
        bool intersecte(Carre& s1) {
                return triangleCarre(*this, s1);}

};


#endif // TRIANGLE_H
