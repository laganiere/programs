
#ifndef TRIANGLE_H // si TRIANGLE_H n'est pas défini
#define TRIANGLE_H // définir TRIANGLE_H

#include "forme.h"
#include <math.h>


class Triangle : public Forme{
private: // privé par défaut, il n'est pas nécessaire de l'indiquer
    double base, cote1, cote2;

public:
    Triangle(double x, double y, double base,
             double cote1, double cote2) :
                Forme(x, y), base(base), cote1(cote1),
                cote2(cote2) {  }

    // Il n'est pas nécessaire de définir Forme() puisque
    // le constructeur par défaut de Forme aurait été
    // implicitement appelé
    Triangle(double base, double cote1, double cote2) :
                Forme(), base(base), cote1(cote1), cote2(cote2) { }

    // Le constructeur copieur par défaut aurait fait la même
    // chose
    Triangle(const Triangle &t) {
        setAncrage(t.getAncrage());
        base = t.base, cote1 = t.cote1, cote2 = t.cote2;
    }

    // le const qui figure dans les méthodes get suivantes
    // préviennent la modification des attributs par la méthode.
    double getBase() const {
        return base;
    }

    void setBase(double base) {
        this->base = base;
    }

    double getCote1() const {
        return cote1;
    }

    void setCote1(double cote1) {
        this->cote1 = cote1;
    }

    double getCote2() const {
        return cote2;
    }

    void setCote2(double cote2) {
        this->cote2 = cote2;
    }

    double getPerimetre() const {
        return base+ cote1+cote2;
    }

    // en prenant pour acquis qu'aucun triangle n'a un angle > 90
    double getAire() const {
        double p = getPerimetre();
        double area = 1/4*sqrt(p*(p-2*base)*(p-2*cote1)
                                                    *(p-2*cote2));
        return area;
    }

};

#endif // TRIANGLE_H


