#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <class Iterator, class T>
Iterator rechercheBinIt(Iterator debut, Iterator fin, const T& valeur) {

  Iterator introuvable= fin;

  while (debut < fin) {


      Iterator it= debut + distance(debut,fin)/2;

      cout << *it << "(" <<  distance(debut,fin) << ") ";

      if (valeur < *it)
          fin= it;
      else if (*it < valeur)
          debut= ++it;
      else
          return it;
  }

  return introuvable;
}

template <class Iterator, class T>
Iterator rechercheBinRec(Iterator debut, Iterator fin, const T& valeur) {

    Iterator introuvable= fin;

    if (debut >= fin)
        return introuvable;

    Iterator it= debut + distance(debut,fin)/2;

    if (valeur < *it)
          fin= it;
    else if (*it < valeur)
          debut= ++it;
    else
          return it;

    it= rechercheBinRec(debut, fin, valeur);

    if (it==fin)
        return introuvable;
    else
        return it;
}

int main() {
    vector<int> v;
    v.push_back(9);
    v.push_back(12);
    v.push_back(4);
    v.push_back(225);
    v.push_back(3);

    vector<int>::iterator it;

    it = find_if(v.begin(),v.end(),bind2nd(less<int>(),7));
    cout << "La premiere valeur inferieure a 7 est "
         << *it << endl;

    vector<int> v2;
    v2.push_back(419);
    v2.push_back(112);
    v2.push_back(14);
    v2.push_back(25);
    v2.push_back(23);

    it = find_first_of(v.begin(),v.end(),
                                v2.begin(),v2.end(),greater<int>());

    if (it!=v.end()) {
      cout << "La premiere valeur superieure a une valeur dans le second vecteur est "
           << *it;

      it = find_if(v2.begin(),v2.end(),bind1st(greater<int>(),*it));

      cout << " (" << *it << ")" << endl;
    }

    v.insert(v.end(),v2.begin(),v2.end());
    sort(v.begin(),v.end());

    it= rechercheBinIt(v.begin(), v.end(), 14);

    cout << endl;
    if (it!=v.end())
        cout << "oui: " << *it << endl;
    else
        cout << "non" << endl;

    it= rechercheBinRec(v.begin(), v.end(), 419);

    if (it!=v.end())
        cout << "oui: " << *it << endl;
    else
        cout << "non" << endl;
}

/*---------------------- resultat --------------------------*\
La premiere valeur inferieure a 7 est 4
La premiere valeur superieure a une valeur dans le second vecteur est 225 (112)
23(10) 9(5) 14(2)
oui: 14
oui: 419
\*----------------------------------------------------------*/
