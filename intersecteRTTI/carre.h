
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
            stringstream ss;
            ss << "Carre (" << Rectangle::getLargeur() << "x"
                    << Rectangle::getLargeur() << ")";
            return ss.str() + Forme::toString();
        }




};

#endif // CARRE_H
