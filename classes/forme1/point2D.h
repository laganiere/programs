
#ifndef POINT2D_H
#define POINT2D_H

#include<sstream>
#include<string>

using namespace std;

class Point2D {
    double x;
    double y;

public:
   Point2D(double x=0, double y=0): x(x), y(y) {}

   // Le constructeur copieur par défaut aurait
       // fait la même chose.
   Point2D(const Point2D& p) { x = p.x, y = p.y; }

   /* this est un paramètre et non une référence.
    Il est donc necessaire d'utiliser l'opérateur
    flèche; this permet d'accéder à la variable
    x, masquée par le paramètre. */

   double getPerimetre() { return 0; }

   void setX(double x) { this->x = x; }

   double getX() const { return x; }

   void setY(double y) { this->y = y; }

   double getY() const { return y; }

};

#endif // POINT2D_H

