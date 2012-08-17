
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
        // vecteurs multidimensionnels
        // vecteur de 3 lignes et 2 colonnes
        // éléments initialisés à 0
        vector< vector<int> > x(3, vector<int>(2, 0));

        vector< vector<int> >::iterator it;
        // à noter que les espaces dans vector< vector<int> >
        // sont importants

        cout << "Valeurs du vecteur multidimensionnel "
                << "après l'itération : " << endl;
        for (it = x.begin(); it != x.end(); it++) {
            vector<int>::iterator it2;
            cout << "{";
            for (it2 = (*it).begin(); it2 != (*it).end(); it2++) {
                *it2 += 3;

                if (it2 == (*it).begin()) cout << *it2;
                else cout << ", " << *it2;
            }
            cout << "}" << endl;
        }


    /*--------------------- résultat -------------------------*\
      Valeurs du vecteur multidimensionnel après l'itération :
      {3, 3}
      {3, 3}
      {3, 3}
    \*--------------------------------------------------------*/
}
