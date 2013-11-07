#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
void affiche(std::string nom, const T &v) {

    T::const_iterator it= v.begin();

    cout << nom << " [" << v.size() << "]:";

    while (it!=v.end()) {

        cout << *it;
        ++it;

        if (it!=v.end())
            cout << ", ";
    }

    cout << " | {" << v.capacity() << "}";

    cout << endl;
}

int main()
{
    // les iterateurs permettent de definir des intervalles
    // a  la construction pour l'initialisation d'un autre vecteur
    vector<int> v1(5, 3), v(v1.begin(), v1.end());
    vector<int>::iterator itr = v.begin();

    affiche("v1", v1);
    affiche("v", v);

    // insertion devant un element
    // attention, l'ietrateur peut etre invalide
    itr= v.insert(itr, 2);
    affiche("apres insertion", v);

    // supression
    v.erase(v.begin()+2, v.end());
    affiche("apres erase", v);
    vector<int>(v.begin(), v.end()).swap(v);
    affiche("apres reduction", v);

    // assignation
    v.assign(v1.begin() + v1.size()/2, v1.end());
    affiche("apres assign", v);
    v.clear();
    affiche("apres clear", v);

    for (vector<int>::iterator it = v1.begin() + v1.size()/2;
                                            it != v1.end(); it++)
        v.push_back(*it);

    affiche("apres boucle", v);
}

/*******************************************\
v1 [5]:3, 3, 3, 3, 3 | {5}
v [5]:3, 3, 3, 3, 3 | {5}
apres insertion [6]:2, 3, 3, 3, 3, 3 | {7}
apres erase [2]:2, 3 | {7}
apres reduction [2]:2, 3 | {2}
apres assign [3]:3, 3, 3 | {3}
apres clear [0]: | {3}
apres boucle [3]:3, 3, 3 | {3}
\*******************************************/
