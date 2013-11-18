#include <iostream>
#include <set>
#include <stdarg.h>
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
    // Conteneur associatif qui emmagasine ses elements
    // en ordre.  Les elements eux-memes servent de cle.
    set<Employee> se;
    se.insert(Employee("Joe", "Tremblay"));
    se.insert(Employee("Real", "Tremblay"));
    se.insert(Employee("Stephane", "Lacroix"));
    se.insert(Employee("Joel", "Lamirand"));

    cout << "Le set contient les employes suivants : ";
    cout << endl;
    for (set<Employee>::iterator it2 = se.begin();
                                        it2 != se.end(); it2++) {
        Employee e = *it2;
        cout << e.getPrenom() << " " << e.getNom() <<  endl;
    }

    // Un employe est trouve dans le set
    Employee bidon("Joe", "Tremblay");
    set<Employee>::iterator it = se.find(bidon);

    // L'employe pointe par l'iterateur est remplace par un
    // nouvel employe.
    if (it != se.end()) {
        Employee tmp(*it);
        tmp.setPrenom("Joel");
        se.erase(it);
        se.insert(tmp);
    }

    // la methode emplace (appel au constructeur)
    se.emplace("Bouchard");

    cout << endl;
    cout << "Le set contient maintenant les employes suivants : ";
    cout << endl;
    for (set<Employee>::iterator it2 = se.begin();
                                        it2 != se.end(); it2++) {
        Employee e = *it2;
        cout << e.getPrenom() << " " << e.getNom() <<  endl;
    }
}

/*--------------------- resultat -------------------------*\
Le set contient les employes suivants :
Stephane Lacroix
Joel Lamirand
Joe Tremblay
Real Tremblay

Le set contient maintenant les employes suivants :
X Bouchard
Stephane Lacroix
Joel Lamirand
Joel Tremblay
Real Tremblay
\*--------------------------------------------------------*/


double average(int count, ...)
{
    va_list ap;
    int j;
    double tot = 0;
    va_start(ap, count); //Requires the last fixed parameter (to get the address)
    for(j=0; j<count; j++)
        tot+=va_arg(ap, double); //Requires the type to cast to. Increments ap to the next argument.
    va_end(ap);
    return tot/count;
}
