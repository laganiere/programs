
#include "rectangle.h"
#include "point2D.h"
#include "triangle.h"

bool intersect (Point2D &p1, Point2D &p2) {
    if (typeid(*p1) == typeid(Rectangle)) {
        if (typeid(*p2) == typeid(Rectangle)) {
            return rectangleRectangle(dynamic_cast<Rectangle&>(p1), dynamic_cast<Rectangle &>(p2));
        }
        if (typeid(*p2) == typeid(Triangle)) {
            return rectangleTriangle(dynamic_cast<Rectangle&>(p1), dynamic_cast<Triangle &>(p2));
        }
    }
}

int main()
{
   bool a = intersect(Rectangle &r1, Rectangle&r2);
   bool b = intersect(Triangle &t, Rectangle&r);
}
