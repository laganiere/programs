#ifndef FORME_H
#define FORME_H

#include <string>
#include <sstream>

#include "intersecte.h"

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

   bool egale(Point2D p) {
       return (this->getX() == p.getX() && this->getY() == p.getY()) ? true : false;
   }

};


class Forme
{
    Point2D ancrage;

public:
    Forme(double x=0, double y=0) {
        ancrage.setX(x);
        ancrage.setY(y);
    }

    void translate(double dx, double dy) {
        ancrage.setX(ancrage.getX() + dx);
        ancrage.setY(ancrage.getY() + dy);
    }

    Point2D getAncrage() const {
        return ancrage;
    }

    void setAncrage(Point2D p1) {
        ancrage = p1;
    }

    virtual void getLimites(Point2D &p1, Point2D &p2) = 0;
    virtual double getPerimetre() const = 0;
    virtual double getAire() const = 0;

    virtual bool intersecte(Forme& s1) =0;
    virtual bool intersecte(Triangle& s1) =0;
    virtual bool intersecte(Rectangle& s1) =0;
    virtual bool intersecte(Carre& s1) =0;

    string toString() {
        std:: stringstream ss;
        ss << " Ancrée au point (" << ancrage.getX()
                << ", " << ancrage.getY() << ")";
        return ss.str();
    }

};

#endif // FORME_H
