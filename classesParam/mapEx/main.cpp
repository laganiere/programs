
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, int> m;
    m["Robert"] = 220;
    cout << m["Robert"] << endl;

    string item;
    int qte;

    cout << "Entrer des items et leur quantité : " << endl;
    while (cin >> item >> qte) {
        m[item] = qte;
     }

    map<string, int>::iterator it;
    int total = 0;

    for (it = m.begin(); it != m.end(); it++) {
        // chaque élément de l'itérateur est une pair
        // avec un "first"(clé) et un "second"(valeur)
        total += it->second;
    }

    it = m.find("pomme");
    // retourne l'itérateur à l'élément ayant pour
    // clé "pomme"

    if (it != m.end())  { // j'ai trouvé!
        m.erase(it);   // m.erase(m.find("pomme")
        cout << "Pomme a été effacé." << endl;
    }
    else
        cout << "Il n'y a pas de pomme dans la map." << endl;

}
