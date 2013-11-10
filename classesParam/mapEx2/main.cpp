#include <iostream>
#include <string>
#include <map>

using namespace std;

class Employe {

    string nom;
    int no;

   public:
    Employe(string n, int num) : nom(n),no(num) {}
    bool operator<(const Employe& e) const {return no < e.no; }
};

int main()
{
    map<string, int> m;
    m["orange"] = 3; // insertion
    // Si l'objet existe, retourne une reference a l'objet
    // dont la cle correspond a cette demande.
    // S'il n'y a pas d'objet associe a cette cle (la cle
    // n'existe pas), alors le constructeur par defaut est utilise
    // pour creer une reference a un objet.

    if (m["orange"] == 3)
        m["orange"] = 7; // mise-a-jour

    // pour plus d'efficacite, il faut utiliser l'operateur insert
    m.insert(pair<string, int>("pomme", 221));
    // fct template pour creer une paire;
    m.insert(make_pair("poire", 12));
    m.insert(make_pair("orange", 7));
    m.insert(make_pair("ananas", 7));

    for (map<string, int>::iterator it= m.begin(); it!=m.end(); ++it)
        cout << "[" << (*it).first << "," << (*it).second << "] ";
    cout << endl;

    // retourne une pair<iterator, bool>
    pair<map<string, int>::iterator, bool> ret;
    ret = m.insert(make_pair("poire", 13));

    if (ret.second)
        cout << "Un nouvel element a ete insere." << endl;
    else
        cout << "L'element existait deja. "
                << "Il n'y a pas eu d'insertion." << endl;

    m.insert(make_pair("poire", 22)).first->second = 22;
    // first est l'iterateur pointant a l'element insere/existant.
    // second est la valeur dans la map.
    // Pour une mise-a-jour, make_pair n'est pas utilise,
    // donc cree pour rien.

    // effacer un element a partir d'un iterateur
    m.erase(m.find("ananas"));

    for (map<string, int>::iterator it= m.begin(); it!=m.end(); ++it)
        cout << "[" << (*it).first << "," << (*it).second << "] ";
    cout << endl;

    // trouve le premier element non <
    map<string, int>::iterator it= m.lower_bound("peche");
    cout << "[" << (*it).first << "," << (*it).second << "] " << endl;

    // trouve le premier element non equivalent
    it= m.upper_bound("poire");
    cout << "[" << (*it).first << "," << (*it).second << "] " << endl;

    map<Employe, float> dossiers;
    dossiers.insert(make_pair(Employe("Robert",123), 15.25));
    dossiers.insert(make_pair(Employe("Jean",453), 14.15));
    dossiers.insert(make_pair(Employe("Paul",323), 25.35));
    dossiers.insert(make_pair(Employe("Simon",663), 20.25));

    for (auto it= dossiers.begin(); it!=dossiers.end(); ++it)
        cout << (*it).second << ", ";
    cout << endl;

}

/*------------------ resultat ------------------------*\
[ananas,7] [orange,7] [poire,12] [pomme,221]
L'element existait deja. Il n'y a pas eu d'insertion.
[orange,7] [poire,22] [pomme,221]
[poire,22]
[pomme,221]
15.25, 25.35, 14.15, 20.25,
\*----------------------------------------------------*/

