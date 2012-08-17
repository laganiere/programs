
#ifndef intersecteH
#define intersecteH

class Forme;
class Rectangle;
class Triangle;
class Carre;
bool intersecte(Forme& s1, Forme& s2);
bool triangleTriangle(Triangle& s1, Triangle& s2);
bool triangleRectangle(Triangle& s1, Rectangle& s2);
bool triangleCarre(Triangle& s1, Carre& s2);
bool rectangleRectangle(Rectangle& s1, Rectangle& s2);
bool rectangleTriangle(Rectangle& s1, Triangle& s2);
bool rectangleCarre(Rectangle& s1, Carre& s2);
bool carreCarre(Carre& s1, Carre& s2);
bool carreRectangle(Carre& s1, Rectangle& s2);
bool carreTriangle(Carre& s1, Triangle& s2);

#endif
