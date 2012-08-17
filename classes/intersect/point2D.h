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

   void translate(double dx, double dy) { x+= dx; y += dy; }

   void setX(double x) { this->x = x; }

   double getX() const { return x; }

   void setY(double y) { this->y = y; }

   double getY() const { return y; }

   virtual void getBoundaries(double &x1, double &y1, double &x2, double &y2) = 0;

   // les deux prochaines méthodes sont des méthodes virtuelles pures
   virtual double getPerimetre() const = 0;
   virtual double getAire() const = 0;

   virtual string toString() {
       std:: stringstream ss;
       ss << " (" << x << ", " << y << ")";
       return ss.str();
   }

};

#endif // POINT2D_H
