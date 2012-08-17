
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

    virtual void getLimites(Point2D &p1, Point2D &p2) {
        p1 = ancrage;
        p2 = ancrage;
    }

    // les deux prochaines méthodes sont des méthodes
    // virtuelles pures
    virtual double getPerimetre() const = 0;
    virtual double getAire() const = 0;

    Point2D getAncrage() const {
        return ancrage;
    }

    void setAncrage(Point2D p1) {
        ancrage = p1;
    }

    string toString() {
        std:: stringstream ss;
        ss << " Ancrée au point (" << ancrage.getX()
                << ", " << ancrage.getY() << ")";
        return ss.str();
    }

};

#endif // FORME_H
