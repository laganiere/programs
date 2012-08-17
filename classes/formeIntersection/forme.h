
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

class Forme { // classe abstraite
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

    // les trois prochaines méthodes sont des méthodes
    // virtuelles pures
    virtual void getLimites(Point2D &p1, Point2D &p2) = 0;
    virtual double getPerimetre() const = 0;
    virtual double getAire() const = 0;

    Point2D getAncrage() const {
        return ancrage;
    }

    void setAncrage(Point2D p1) {
        ancrage = p1;
    }

    string intersecte(Forme &f) {
        Point2D f1p1;
        Point2D f1p2;

        Point2D f2p1;
        Point2D f2p2;

        this->getLimites(f1p1, f1p2);
        f.getLimites(f2p1, f2p2);

        // si la boite formée par les points 1 et 2 des des formes
        // ne se croisent pas, les formes ne s'intersectent pas.
        if ((f1p1.getX() < f2p1.getX()
                                && f1p2.getX() < f2p1.getX()) ||
            (f1p1.getY() < f2p1.getY()
                                && f1p2.getY() < f2p1.getY()) ||
            (f1p1.getX() > f2p2.getX()
                                && f1p2.getX() > f2p2.getX()) ||
            (f1p1.getY() > f2p2.getY()
                                && f1p2.getY() > f2p2.getY())) {
            return " n'intersecte pas avec ";
        }
        return  " intersecte avec ";

    }

    string toString() {
        std:: stringstream ss;
        ss << " Ancrée au point (" << ancrage.getX()
                << ", " << ancrage.getY() << ")";
        return ss.str();
    }

};

#endif // FORME_H
