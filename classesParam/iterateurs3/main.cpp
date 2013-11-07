
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

template <typename T>
void affiche(const T &v) {

    T::const_iterator it= v.begin();

    while (it!=v.end()) {

        cout << *it;
        ++it;

        if (it!=v.end())
            cout << ", ";
    }

    cout << endl;
}

int main()
{
    vector<int> v2(5, 1);
    v2[1] = v2[3] = 99;

    affiche(v2);

    vector<int>::iterator p;
    p = std::remove(v2.begin(), v2.end(), 99);
    // deplace les elements *q du conteneur de facon
    // a  ce que [v.begin(), p[, on ne trouve que des
    // elements tels que !(*q == valeur)

    affiche(v2);

    vector<int> v3(v2.begin(),p);
    affiche(v3);

    // attention a ne pas deborder du conteneur
    v2.erase(v2.begin()+1,v2.end()-2);
    affiche(v2);

    v2.push_back(4);
    v2.push_back(99);
    v2.push_back(5);
    v2.push_back(6);

    affiche(v2);
    // l'idiome erase-remove
    v2.erase(remove(v2.begin(), v2.end(), 99), v2.end());
    affiche(v2);

    list<int> li(5, 1);
    li.push_back(99);
    li.push_front(99);
    li.push_front(4);

    affiche(li);
    // list a son propre remove
    li.remove(99);
    affiche(li);
}

/*--------------------------------------------------------*\
1, 99, 1, 99, 1
1, 1, 1, 99, 1
1, 1, 1
1, 99, 1
1, 99, 1, 4, 99, 5, 6
1, 1, 4, 5, 6
4, 99, 1, 1, 1, 1, 1, 99
4, 1, 1, 1, 1, 1
\*--------------------------------------------------------*/
