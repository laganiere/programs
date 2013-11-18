#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <functional>
#include <vector>

using namespace std;

template < class V >
std::ostream& operator<< (std::ostream &out, std::vector<V> &v) {
  copy(v.begin(), v.end(), ostream_iterator<V>(out, " ") );
  return out;
}

bool impair(int a) {
    return (a%2 == 1);
}

void trirapide(vector<int>::iterator it1,
                                    vector<int>::iterator it2) {
    if (it2-it1 <= 1)
        return;

    // le pivot est le premier element
    vector<int>::iterator it = partition(it1+1, it2,
                                     bind2nd(less<int>(), *it1));
    // remet le pivot a sa place
    swap(*it1,*(it-1));

    trirapide(it1, it-1);
    trirapide(it, it2);
}

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(8);
    v.push_back(3);
    v.push_back(1);
    v.push_back(6);

    cout << v << endl;

    // accumuler (additionner par defaut) le contenu
    // du vecteur entre begin et end au troisieme argument
    int a = accumulate(v.begin(), v.end(), 0);
    cout << "Resultat de l'addition : " << a << endl;

    // tri les quatre premieres valeurs du vecteur avec la
    // fonction less
    sort(v.begin(), v.begin()+4, less<int>());

    cout << "Resultat du tri less (4 premieres valeurs): ";
    cout << v << endl;

    // tri les quatre premieres valeurs du vecteur avec la
    // fonction greater
    sort(v.begin(), v.begin()+4, greater<int>());

    cout << "Resultat du tri greater (4 premieres valeurs): ";
    cout << v << endl;

    vector<int>::iterator itp = partition(v.begin(), v.end(),
                                          bind2nd(less<int>(), v.back()));
    cout << "Resultat de la partition (bind2nd): ";
    cout << v << " : " << *itp << endl;

    itp = partition(v.begin(), v.end(), bind1st(less<int>(), v.back()));
    cout << "Resultat de la partition (bind1st): ";
    cout << v << " : " << *itp << endl;

    // tri avec quicksort
    trirapide(v.begin(), v.end());

    cout << "Resultat du tri rapide: ";
    cout << v << endl;

    // accumuler les valeurs du vecteur en les multipliant
    int c = accumulate(v.begin(), v.end(), 1, multiplies<int>());
    cout << "Resultat de la multiplication : " << c << endl;

    // decompte des elements repondant a une condition
    cout << count_if(v.begin(),v.end(),bind2nd(less<int>(),5)) << endl;
}

/*--------------------- resultat -------------------------*\
4 2 9 7 8 3 1 6
Resultat de l'addition : 40
Resultat du tri less (4 premieres valeurs): 2 4 7 9 8 3 1 6
Resultat du tri greater (4 premieres valeurs): 9 7 4 2 8 3 1 6
Resultat de la partition (bind2nd): 1 3 4 2 8 7 9 6  : 8
Resultat de la partition (bind1st): 9 7 8 2 4 3 1 6  : 2
Resultat du tri rapide: 1 2 3 4 6 7 8 9
Resultat de la multiplication : 72576
4
\*--------------------------------------------------------*/


/*----------------ex: template fonction less--------------*\
template <class T> struct less : binary_function <T,T,bool> {
  bool operator() (const T& x, const T& y) const {return x<y;}
};
\*--------------------------------------------------------*/
