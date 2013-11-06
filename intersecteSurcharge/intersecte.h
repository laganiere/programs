
#ifndef intersecteH
#define intersecteH

class Forme;
class Rectangle;
class Triangle;
class Carre;
bool intersecte(const Forme& s1, const Forme& s2);
bool triangleTriangle(const Triangle& s1, const Triangle& s2);
bool triangleRectangle(const Triangle& s1, const Rectangle& s2);
bool triangleCarre(const Triangle& s1, const Carre& s2);
bool rectangleRectangle(const Rectangle& s1, const Rectangle& s2);
bool rectangleCarre(const Rectangle& s1, const Carre& s2);
bool carreCarre(const Carre& s1, const Carre& s2);

#endif
