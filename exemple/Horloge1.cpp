
#include <string>
#include "Horloge1.h"

using namespace std;

Horloge::
        Horloge(int sec) :
        secondes(sec), minutes(0), heures(0), jours(0)
{
    normaliserTout();
}

Horloge::
        Horloge(int j, int hrs, int min, int sec) :
        secondes(sec), minutes(min), heures(hrs), jours(j)
{
    normaliserTout();
}

inline void Horloge::
        normaliserTout() {
    minutes+= normaliser(secondes,60);
    heures+= normaliser(minutes,60);
    jours+= normaliser(heures,24);
}


