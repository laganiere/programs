#ifndef TRIANGLE_H // si TRIANGLE_H n'est pas défini
#define TRIANGLE_H // définir TRIANGLE_H

class Triangle {
private: // privé par défaut, il n'est pas nécessaire de l'indiquer
    static const double NOT_COMPUTED;
    static int numberOfTriangles;

    double a,b,c;
    // cette variable peut être changée lors d'un appel
    // à une méthode const
    mutable double area;

    void computeArea() const { area = a*b;  }

public:
    static int getNumberOfTriangles() {return numberOfTriangles; }

    Triangle(double a, double b, double c) : a(a), b(b), c(c),
                    area(NOT_COMPUTED) { numberOfTriangles++; }

    // le const qui figure dans les méthodes suivantes
    // préviennent la modification des attributs par la méthode.
    double getPerimeter() const {return a+b+c; }
    double getArea() const {
        if (area == NOT_COMPUTED)
            computeArea();
        return area;
    }
};

#endif // TRIANGLE_H
