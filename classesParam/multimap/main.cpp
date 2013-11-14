#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    multimap<string, int> m;    
    multimap<string, int>::iterator it;

    m.insert(make_pair("poire", 22));
    m.insert(make_pair("pomme", 52));
    m.insert(make_pair("raisin", 45));
    m.insert(make_pair("orange", 7));
    it= m.insert(make_pair("pomme", 27));
    // insertion avec un indice pour efficacite
    it= m.insert(it, make_pair("pommette", 8));

    for (auto it2= m.begin(); it2!= m.end(); it2++) {

        cout << "[" << it2->first << "," << it2->second << "] ";
    }
    cout << endl;

    // insert retourne la position d'insertion
    cout << "[" << it->first << "," << it->second << "] " << endl;

    // l'appel a  la methode find retourne
    // le premier element egal a  la cle
    it= m.find("orange");
    if (it!=m.end())
      cout << "[" << it->first << "," << it->second << "] " << endl;

    // equal_range retourne une paire d'iterateurs
    pair<multimap<string, int>::iterator,
                            multimap<string, int>::iterator > pit;
    pit = m.equal_range("pomme");

    for (it = pit.first; it != pit.second; it++) {
        cout << "[" << (*it).first << ", "
                            << (*it).second << "] ";
    }
    cout << endl;

    // erase retourne le nombre d'elements detruits
    cout <<  m.erase("pomme")<<endl;

    for (auto it2= m.begin(); it2!= m.end(); it2++) {

        cout << "[" << it2->first << "," << it2->second << "] ";
    }
    cout << endl;
}

/*--------------------- resultat -------------------------*\
[orange,7] [poire,22] [pomme,52] [pomme,27] [pommette,8] [raisin,45]
[pommette,8]
[orange,7]
[pomme, 52] [pomme, 27]
2
[orange,7] [poire,22] [pommette,8] [raisin,45]
\*--------------------------------------------------------*/
