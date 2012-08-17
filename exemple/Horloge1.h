
#ifndef HORLOGE1_H
#define HORLOGE1_H

#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;

class Horloge {

    private:

        int secondes;
        int minutes;
        int heures;
        int jours;

        int normaliser(int &t, int unite) {
            int exces(t/unite);
            t%= unite;
            return exces;
        }

        inline void normaliserTout();

    public:

        // ctr par défaut et ctr à 1 argument,
        // défini une conversion de int à horloge
        Horloge(int sec=0);
        Horloge(int j, int hrs, int min, int sec);
        Horloge(const Horloge &t) : // ctr copieur
            secondes(t.secondes),
            minutes(t.minutes),
            heures(t.heures),
            jours(t.jours) { }

        int sec() const {return secondes;}
        int min() const {return minutes;}
        int hr()  const {return heures;}
        int jour() const {return jours;}
        const string toString() const {
            stringstream ss (stringstream::in | stringstream::out);
            ss << jours << "jour" << (jours>1?"s ":" ");
            ss << heures << "hr" << (heures>1?"s ":" ");
            ss << minutes << "min" << (minutes>1?"s ":" ");
            ss << secondes << "sec";
            return ss.str();}
};


#endif // HORLOGE1_H
