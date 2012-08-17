
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <sstream>
#include <iostream>
#include "forme.h"

using namespace std;

class Rectangle: public Forme {
    double largeur;
    double hauteur;

public:
    Rectangle(double x, double y, double largeur, double hauteur) :
            Forme(x, y), largeur(largeur), hauteur(hauteur) { }

    Rectangle(double largeur, double hauteur):
            Forme(), largeur(largeur), hauteur(hauteur) { }

    Rectangle(const Rectangle &r) {
        setAncrage(r.getAncrage());
        largeur = r.largeur, hauteur = r.hauteur;
    }

    double getPerimetre() const {
        return 2*(largeur+ hauteur);
    }

    double getAire() const {
        return largeur*hauteur;
    }

    void getLimites(Point2D &p1, Point2D &p2) {
        p1 = getAncrage();
        p2.setX(p1.getX() + largeur);
        p2.setY(p1.getY() + hauteur);
    }

    double getHauteur() const {
        return hauteur;
    }

    void setHauteur(double hauteur) {
        this->hauteur = hauteur;
    }

    double getLargeur() const {
        return largeur;
    }

    void setLargeur(double largeur) {
        this->largeur = largeur;
    }

    string toString() { // redéfinition
        stringstream ss;
        ss << "Rectangle (" << hauteur << "x" << largeur << ")";
        return ss.str() + Forme::toString();
    }
};

#endif // RECTANGLE_H
