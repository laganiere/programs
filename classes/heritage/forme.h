#ifndef FORME_H
#define FORME_H

#include<sstream>
#include<string>

using namespace std;

class Point2D {
    double x;
    double y;

public:
   Point2D(double x=0, double y=0): x(x), y(y) {}

   void setX(double x) { this->x = x; }

   double getX() const { return x; }

   void setY(double y) { this->y = y; }

   double getY() const { return y; }

};

class Forme {
    Point2D ancrage;

public:
    Forme(double x=0, double y=0) {
        ancrage.setX(x);
        ancrage.setY(y);
    }

    // Le constructeur copieur par défaut aurait
    // fait la même chose.
    Forme(const Forme& f) { ancrage = f.ancrage; }

    Point2D getAncrage() const {
        return ancrage;
    }

    void setAncrage(Point2D p1) {
        ancrage = p1;
    }

    string toString() const {
        std:: stringstream ss;
        ss << " Ancrée au point (" << ancrage.getX()
                << ", " << ancrage.getY() << ")";
        return ss.str();
    }

};

#endif // FORME_H

