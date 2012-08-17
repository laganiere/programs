#ifndef CARRE_H
#define CARRE_H

#include <string>
#include <sstream>
#include "forme.h"
#include "rectangle.h"

using namespace std;

class Carre: public Rectangle {
    public:
        Carre(double x, double y, double cote) :
                Rectangle(x, y, cote, cote) { }

        Carre(double cote) : Rectangle (cote, cote) { }

        double getPerimetre() const {
            return 4*Rectangle::getLargeur();
        }

        string toString() {
            std::stringstream ss;
            ss << "Carre (" << Rectangle::getLargeur() << "x"
                    << Rectangle::getLargeur() << ")";
            return ss.str() + Forme::toString();
        }

        bool intersecte(Forme& s1) {
            return s1.intersecte(*this); }
        bool intersecte(Triangle& s1) {
            return triangleCarre(s1,*this);}
        bool intersecte(Rectangle& s1) {
            return rectangleCarre(s1,*this);}
        bool intersecte(Carre& s1) {
            return carreCarre(*this, s1);}
};

#endif // CARRE_H
