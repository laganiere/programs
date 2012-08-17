
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(5, 0);
    vector<int>::iterator it, it2;

    it = v.begin();
    it++; it++;

    // insère un élément devant la position courante
    v.insert(it, 99);

    // l'itérateur se trouve maintenant à la position
    // d'insertion du nouvel élément.

    it++;
    it = v.erase(it);

    cout << "{";
    for (it2 = v.begin(); it2 != v.end(); it2++) {
        if (it2 == v.begin()) cout << *it2;
        else cout << ", " << *it2;
    }
    cout <<  "}" << endl;
}
