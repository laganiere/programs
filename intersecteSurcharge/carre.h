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

        string toString() const {
            std::stringstream ss;
            ss << "Carre (" << Rectangle::getLargeur() << "x"
                    << Rectangle::getLargeur() << ")";
            return ss.str() + Forme::toString();
        }

        bool intersecte(const Forme& s1) const {
            return s1.intersecte(*this); }
        bool intersecte(const Triangle& s1) const {
            return triangleCarre(s1,*this);}
        bool intersecte(const Rectangle& s1) const {
            return rectangleCarre(s1,*this);}
        bool intersecte(const Carre& s1) const {
            return carreCarre(*this, s1);}
};

#endif // CARRE_H
