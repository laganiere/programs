#ifndef CARRE_H
#define CARRE_H

#include "rectangle.h"
#include "point2D.h"

class Carre : public Rectangle {
public:
    Carre(double x, double y, double l) :
            Rectangle(x, y, l, l) { }

    Carre(double l) : Rectangle (l, l) { }

    double getPerimetre() const { return 4*Rectangle::getLargeur(); }

    string toString() {
        std::stringstream ss;
        ss << "Carre(" << Rectangle::getLargeur() << "x" << Rectangle::getLargeur() << ")";
        return ss.str() + Point2D::toString();
    }
};


#endif // CARRE_H
