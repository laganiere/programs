
#include <iostream>
#include <set>
#include "employee.h"

using namespace std;

bool operator<(Employee a, Employee b) {
    if (a.getNom().compare(b.getNom()) == 0)
        return a.getPrenom().compare(b.getPrenom()) < 0;
    else
        return a.getNom().compare(b.getNom()) < 0;
}

int main()
{
    // Conteneur associatif qui emmagasine ses éléments
    // en ordre.  Les éléments eux-mêmes servent de clé.
    set<Employee> se;
    se.insert(Employee("Joe", "Tremblay"));
    se.insert(Employee("Réal", "Tremblay"));
    se.insert(Employee("Stéphane", "Lacroix"));
    se.insert(Employee("Joel", "Lamirand"));

    cout << "Le set contient les employées suivants : ";
    cout << endl;
    for (set<Employee>::iterator it2 = se.begin();
                                        it2 != se.end(); it2++) {
        Employee e = *it2;
        cout << e.getPrenom() << " " << e.getNom() <<  endl;
    }

    // Un employée est trouvé dans le set
    Employee bidon("Joe", "Tremblay");
    set<Employee>::iterator it = se.find(bidon);

    // L'employée pointé par l'itérateur est remplacé par un
    // nouvel employée.
    if (it != se.end()) {
        Employee tmp(*it);
        tmp = Employee("Miguel", "Bonneau");
        se.erase(it);
        se.insert(tmp);
    }

    cout << endl;
    cout << "Le set contient maintenant les employées suivants : ";
    cout << endl;
    for (set<Employee>::iterator it2 = se.begin();
                                        it2 != se.end(); it2++) {
        Employee e = *it2;
        cout << e.getPrenom() << " " << e.getNom() <<  endl;
    }

    /*--------------------- résultat -------------------------*\
      Le set contient les employées suivants :
        Stéphane Lacroix
        Joel Lamirand
        Joe Tremblay
        Réal Tremblay

      Le set contient maintenant les employées suivants :
        Miguel Bonneau
        Stéphane Lacroix
        Joel Lamirand
        Réal Tremblay
     \*--------------------------------------------------------*/

}
