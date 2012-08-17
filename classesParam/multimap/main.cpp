
#include <iostream>
#include <multimap.h>
#include <string>

using namespace std;

int main()
{
    multimap<string, int> m;
    m.insert(make_pair("pomme", 12));
    m.insert(make_pair("orange", 7));
    m.insert(make_pair("pomme", 27));
    // l'appel à la méthode find retourne
    // le premier élément égal à la clé

    pair<multimap<string, int>::iterator,
                            multimap<string, int>::iterator > pit;

    pit = m.equal_range("pomme");
    // equal_range retourne une paire d'itérateurs

    multimap<string, int>::iterator it;
    for (it = pit.first; it != pit.second; it++) {
        cout << "[" << (*it).first << ", "
                            << (*it).second << "]" << endl;
    }

    /*--------------------- résultat -------------------------*\
      [pomme, 12]
      [pomme, 27]
    \*--------------------------------------------------------*/

}
