
#include <iostream>
#include <map>

using namespace std;

// Quand on met des pointeurs dans des maps, il faut
// redéfinir l'opérateur <
struct ltstr {
    bool operator()(const char* s1, const char* s2) const {
        return strcmp(s1, s2) < 0;
    }
};

int main()
{
    map<const char*, int, ltstr> mois;

    mois["january"] = 31;
    mois["février"] = 28;
    mois["mars"] = 31;
    mois["avril"] = 30;
    mois["mai"] = 31;
    mois["juin"] = 30;
    mois["juillet"] = 31;
    mois["août"] = 31;
    mois["septembre"] = 30;
    mois["octobre"] = 31;
    mois["novembre"] = 30;
    mois["décembre"] = 31;

    cout << "juin -> " << mois["juin"] << endl;

    map<const char*, int, ltstr>::iterator cur = mois.find("juin");
    map<const char*, int, ltstr>::iterator prev = cur;
    map<const char*, int, ltstr>::iterator next = cur;

    ++next;
    --prev;

    cout << "Le mois précédent (en ordre alphabétique) est "
            << (*prev).first << endl;
    cout << "Le mois suivant (en ordre alphabétique) est "
            << (*next).first << endl;


        /*------------------ résultat ------------------------*\
         juin -> 30
         Le mois précédent (en ordre alphabétique) est juillet
         Le mois suivant (en ordre alphabétique) est mai
        \*----------------------------------------------------*/

}
