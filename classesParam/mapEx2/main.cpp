
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, int> m;
    m["orange"] = 3; // insertion
    // Si l'objet existe, retourne une référence à l'objet
    // dont la clé correspond à cette demande.
    // S'il n'y a pas d'objet associé à cette clé (la clé
    // n'existe pas), alors le constructeur par défaut est utilisé
    // pour créer une référence à un objet.

    if (m["orange"] == 3) // recherche par accès rapide
        m["orange"] = 7; // mise-à-jour

    // pour plus d'efficacité, il faut utiliser l'opérateur insert
    m.insert(pair<string, int>("pomme", 221));
    m.insert(make_pair("poire", 12));
    // fct template pour créer une des pairs;
    // retourne une pair<iterator, bool>

    pair<map<string, int>::iterator, bool> ret;
    ret = m.insert(make_pair("poire", 13));

    if (ret.second)
        cout << "Un nouvel élément a été inséré." << endl;
    else
        cout << "L'élément existait déjà. "
                << "Il n'y a pas eu d'insertion." << endl;

    m.insert(make_pair("poire", 22)).first->second = 22;
    // first est l'itérateur pointant à l'élément inséré/existant.
    // second est la valeur dans la map.
    // Pour une mise-à-jour, make_pair n'est pas utilisé,
    // donc créé pour rien.


    /*------------------ résultat ------------------------*\
      L'élément existait déjà. Il n'y a pas eu d'insertion.
    \*----------------------------------------------------*/

}
