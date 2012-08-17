
#include <list>
#include <iostream>
#include "point2D.h"

using namespace std;

bool compare(const Point2D &p1, const Point2D &p2) {
    if (p1.x == p2.x)
        return p1.y < p2.y;
    else
        return p1.x < p2.x;
}

bool richard(int a, int b) {
 return abs(a) < abs(b);
}

int main()
{
    Point2D p1(2, 5), p2(5, 2), p3(1, 3);
    list<Point2D> liste;
    liste.push_back(p1);
    liste.push_back(p2);
    liste.push_back(p3);

    //liste.sort(); NON!
    liste.sort(compare);
    list<Point2D>::iterator itr;

    cout << "liste triée : {";
    for (itr = liste.begin(); itr != liste.end(); itr++) {
        if (itr == liste.begin()) cout << "(" << (*itr).x << ", "
                << (*itr).y << ")";
        else cout << ", (" << (*itr).x << ", " << (*itr).y << ")";
    }

    cout << "}" << endl;

    list<int> liste2;
    liste2.push_back(2);
    liste2.push_back(5);
    liste2.push_back(-3);
    liste2.push_back(6);

    liste2.sort(richard);

    list<int>::iterator itr2;

    cout << "liste2 triée : {";
    for (itr2 = liste2.begin(); itr2 != liste2.end(); itr2++) {
        if (itr2 == liste2.begin()) cout << *itr2;
        else cout << ", " << *itr2 ;
    }
    cout << "}" << endl;

    /*--------------------- résultat -------------------------*\
      liste triée : {(1, 3), (2, 5), (5, 2)}
      liste2 triée : {2, -3, 5, 6}
    \*--------------------------------------------------------*/


}
