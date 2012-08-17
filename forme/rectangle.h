
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point2D.h"

#include <iostream>

using namespace std;

class Rectangle: public Point2D {
    double largeur;
    double hauteur;

public:
    Rectangle(double x, double y, double l, double h): Point2D(x, y), largeur(l), hauteur(h) { }

    Rectangle(double l, double h): Point2D(), largeur(l), hauteur(h) { }

    Rectangle(const Rectangle &r) {
        x = r.x, y = r.y, largeur = r.largeur, hauteur = r.hauteur;
    }

    double getPerimetre() const {
        return 2*(largeur+ hauteur);
    }

    double getAire() const {
        return largeur*hauteur;
    }

    double getHauteur() const {
        return hauteur;
    }

    void setHauteur(double h) {
        hauteur = h;
    }

    double getLargeur() const {
        return largeur;
    }

    void setLargeur(double l) {
        largeur = l;
    }

    void getBoundaries(double &x1, double &y1, double &x2, double &y2) {
        x1 = this->getX();
        y1 = this->getY();
        x2 = this->getX() + largeur;
        y2 = this->getY() + hauteur;
    }

    string toString() { // redéfinition
        std::stringstream ss;
        ss << "Rectangle(" << hauteur << "x" << largeur << ")";
        return ss.str() + Point2D::toString();
    }


};

#endif // RECTANGLE_H
