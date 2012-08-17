
#include <iostream>
#include "animal.h"
#include "animalVirtual.h"

using namespace std;

int main()
{
    // avec les classes dans animal.h
    faune1::Poule c(2);
    c.broute();

    float w = c.getPoids();
    cout << "La poule pèse "
            << w << " lbs après avoir brouté." << endl;

    faune1::Humain henri(200);

    cout << "Henri mange une salade et la poule." << endl;
    henri.broute();
    henri.mange(c);

    // la ligne suivante cause une erreur de compilation
    // "appel à getWeight() est ambigue"
    // float x = henri.getWeight();

    float x2 = henri.Herbivore::getPoids();
    cout << "Henri Herbivore pèse maintenant "
            << x2 << " lbs." << endl;
    float x3 = henri.Carnivore::getPoids();
    cout << "henri Carnivore pèse maintenant "
            << x3 << " lbs." << endl << endl;

    // avec les classes dans animalVirtual.h
    faune2::Poule c2(2);
    c2.broute();

    float wC2 = c.getPoids();
    cout << "La poule pèse "
            << wC2 << " lbs après avoir brouté." << endl;

    faune2::Humain remi(200);

    cout << "Rémi mange une salade et la poule." << endl;
    remi.broute();
    remi.mange(c2);

    float xR1 = remi.getPoids();
    cout << "Rémi Humain pèse maintenant "
            << xR1 << " lbs." << endl;
    float xR2 = remi.Herbivore::getPoids();
    cout << "Rémi Herbivore pèse maintenant "
            << xR2 << " lbs." << endl;
    float xR3 = remi.Carnivore::getPoids();
    cout << "Rémi Carnivore pèse maintenant "
            << xR3 << " lbs." << endl;

    /*----------------- résultat ----------------------*\
    La poule pèse 2.1 lbs après avoir brouté.
    Henri mange une salade et la poule.
    Henri Herbivore pèse maintenant 200.1 lbs.
    henri Carnivore pèse maintenant 200.21 lbs.

    La poule pèse 2.1 lbs après avoir brouté.
    Rémi mange une salade et la poule.
    Rémi Humain pèse maintenant 200.31 lbs.
    Rémi Herbivore pèse maintenant 200.31 lbs.
    Rémi Carnivore pèse maintenant 200.31 lbs.
    \*-------------------------------------------------*/

}
