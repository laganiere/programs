
#include <iostream>

typedef int Entier;
typedef struct Point{int x; int y;} Point;
// ou typedef struct {int x; int y;} Point;

struct Point fct() {
    struct Point p;
    p.x = 2;
    p.y = 3;
    return p;
}

int fct2(struct Point p) {
    p.y++;
    return p.y;
}

int main() {
    Entier ent = 5;
    ent++;
    std::cout << "ent=" << ent << std::endl;

    // grâce au typedef, on peut écrire simplement Point
    Point a = fct();
    std::cout << "Après fct(Point): a.x=" << a.x
            << ", a.y=" << a.y << std::endl;

    int c = fct2(a);
    std::cout << "Après fct2(Point): a.x=" << a.x
            << ", a.y=" << a.y
            << ", c=" << c <<  std::endl;

    /*--------------- résultat ------------------------*\
      ent=6
      Après fct(Point): a.x=2, a.y=3
      Après fct2(Point): a.x=2, a.y=3, c=4
    \*-------------------------------------------------*/

}
