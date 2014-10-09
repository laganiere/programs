
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"
#include <iostream>

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

    string toString() const { // redéfinition
        std::stringstream ss;
        ss << "Rectangle (" << hauteur << "x" << largeur << ")";
        return ss.str() + Forme::toString();
    }


};

#endif // RECTANGLE_H

