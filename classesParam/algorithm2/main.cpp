
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <functional>
#include <vector>

using namespace std;

bool impair(int a) {
    return (a%2 == 1);
}

void quicksort(vector<int>::iterator it1,
                                    vector<int>::iterator it2) {
    if (*it1 <= 1)
        return;
    vector<int>::iterator it = partition(it1, it2,
                                     bind2nd(less<int>(), *it1));
    quicksort(it1, it);
    quicksort(it, it2);
}

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(9);
    v.push_back(7);

    // accumuler (additionner par défaut) le contenu
    // du vecteur entre begin et end au troisième argument
    int a = accumulate(v.begin(), v.end(), 0);
    cout << "Résultat de l'addition : " << a << endl;

    // tri les deux premières valeurs du vecteur avec la
    // fonction less
    sort(v.begin(), v.begin()+1, less<int>());

    cout << "Résultat du tri : ";
    for (int i = 0; i != v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // accumuler les valeurs du vecteur en les multipliant
    int c = accumulate(v.begin(), v.end(), 1, multiplies<int>());
    cout << "Résultat de la multiplication : " << c << endl;

    /*--------------------- résultat -------------------------*\
      Résultat de l'addition : 20
      Résultat du tri : 4 9 7
      Résultat de la multiplication : 252
    \*--------------------------------------------------------*/
}
