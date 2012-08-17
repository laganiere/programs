
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

    double getPerimetre() const {
        return 2*(largeur+ hauteur);
    }

    double getArea() const {
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
};

#endif // RECTANGLE_H
