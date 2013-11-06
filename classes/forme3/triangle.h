#ifndef TRIANGLE_H // si TRIANGLE_H n'est pas défini
#define TRIANGLE_H // définir TRIANGLE_H

class Triangle {
private: 
    static const double NOT_COMPUTED;
    static int numberOfTriangles;

    double base, cote1, cote2;
    // cette variable peut etre changee lors d'un appel
    // a� une methode const
    mutable double area;

    // en prenant pour acquis qu'aucun triangle n'a un angle > 90
    void computeArea() const { 
        double p = getPerimetre();
        area = 1/4*sqrt(p*(p-2*base)*(p-2*cote1)
                                    *(p-2*cote2));
     }

public:
    static int getNumberOfTriangles() {return numberOfTriangles; }

    Triangle(double a, double b, double c) : a(a), b(b), c(c),
                    area(NOT_COMPUTED) { numberOfTriangles++; }

    // le const qui figure dans les methodes suivantes
    // previent la modification des attributs par la methode.
    double getPerimeter() const {return base+cote1+cote2; }
    double getArea() const {
        if (area == NOT_COMPUTED)
            computeArea();
        return area;
    }
};

#endif // TRIANGLE_H
