
#ifndef POINT2D_H
#define POINT2D_H

#include<sstream>
#include<string>

using namespace std;

class Point2D { // classe abstraite
    double x;
    double y;

public:
   Point2D(double x=0, double y=0): x(x), y(y) {}

   // Le constructeur copieur par défaut aurait
       // fait la même chose.
   Point2D(const Point2D& p) { x = p.x, y = p.y; }

   // les deux prochaines méthodes sont des méthodes
   // virtuelles pures
   virtual double getPerimetre() const = 0;
   virtual double getAire() const = 0;

   string toString() {
       std:: stringstream ss;
       ss << " (" << x << ", " << y << ")";
       return ss.str();
   }

   void setX(double x) { this->x = x; }

   double getX() const { return x; }

   void setY(double y) { this->y = y; }

   double getY() const { return y; }

};

#endif // POINT2D_H

