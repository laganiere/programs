
#ifndef POINT2D_H
#define POINT2D_H

class Point2D { // classe abstraite pure
public:
   virtual void getBoundaries(double &x1, double &y1,
                              double &x2, double &y2) = 0;
   virtual double getPerimetre() const = 0;
   virtual double getAire() const = 0;
};

#endif // POINT2D_H
