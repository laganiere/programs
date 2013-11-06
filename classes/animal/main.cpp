
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
    cout << "La poule pese "
            << w << " lbs apres avoir broute." << endl;

    faune1::Humain henri(200);

    cout << "Henri mange une salade et la poule." << endl;
    henri.broute();
    henri.mange(c);

    // la ligne suivante cause une erreur de compilation
    // "appel a  getPoids() est ambigue"
    // float x = henri.getPoids();

    float x2 = henri.Herbivore::getPoids();
    cout << "Henri Herbivore pese maintenant "
            << x2 << " lbs." << endl;
    float x3 = henri.Carnivore::getPoids();
    cout << "henri Carnivore pese maintenant "
            << x3 << " lbs." << endl << endl;

    // avec les classes dans animalVirtual.h
    faune2::Poule c2(2);
    c2.broute();

    float wC2 = c.getPoids();
    cout << "La poule pese "
            << wC2 << " lbs apres avoir broute." << endl;

    faune2::Humain remi(200);

    cout << "Remi mange une salade et la poule." << endl;
    remi.broute();
    remi.mange(c2);

    float xR1 = remi.getPoids();
    cout << "Remi Humain pese maintenant "
            << xR1 << " lbs." << endl;
    float xR2 = remi.Herbivore::getPoids();
    cout << "Remi Herbivore pese maintenant "
            << xR2 << " lbs." << endl;
    float xR3 = remi.Carnivore::getPoids();
    cout << "Remi Carnivore pese maintenant "
            << xR3 << " lbs." << endl;

    /*----------------- resultat ----------------------*\
    La poule pese 2.1 lbs apres avoir broute.
    Henri mange une salade et la poule.
    Henri Herbivore pese maintenant 200.1 lbs.
    henri Carnivore pese maintenant 200.21 lbs.

    La poule pese 2.1 lbs apres avoir broute.
    Remi mange une salade et la poule.
    Remi Humain pese maintenant 200.31 lbs.
    Remi Herbivore pese maintenant 200.31 lbs.
    Remi Carnivore pese maintenant 200.31 lbs.
    \*-------------------------------------------------*/

}
