
#ifndef HORLOGE3_H
#define HORLOGE3_H

#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
using namespace std;

class Horloge {

    private:

        long secondes;

    public:

        Horloge(long sec=0) : secondes(sec) { }
        Horloge(int j, int hrs, int min, long sec) {
                secondes= sec + min*60 + hrs*3600 + j*86400; }
        Horloge(const Horloge &t) : secondes(t.secondes) { }

        long sec() const {return secondes%60;}
        int min() const {return (secondes/60)%60;}
        int hr()  const {return (secondes/3600)%24;}
        int jour() const {return secondes/86400;}

        // a += b est équivalent à a.operator+=(b);
        // operator : mot clé lors de la redéfinition d'opérateurs
        // binaires : 2 opérandes *this et droit
        Horloge& operator+=(const Horloge &droit) {
                secondes+= droit.secondes;
                // retourne le rsultat par rfrence
                return *this; }

        Horloge& operator-=(const Horloge &droit) {
                secondes-= droit.secondes; return *this; }

        // a =~ b est équivalent à a= b.operator~();
        // unaire: 1 opérandes *this
        // const donc ne change pas l'état de l'objet
        const Horloge operator~() const {
                Horloge t(*this);
                if (t.sec()<30) t.secondes-= t.sec();
                else t.secondes+= 60-t.sec();
                return t; }

        // pre-incrémente
        // int différencie le post et le pré incrément,
        Horloge& operator++() { *this+= 1; return *this; }

        // post-incrémente
        // const afin d'éviter l'appel à une méthode/fct non-const
        const Horloge operator++(int) { // int => opérande fictive
                Horloge tk(*this);
                ++(*this);
                // retourne le résultat par valeur
                return tk;
                // option alternative: return Horloge(secondes++);
            }

        const string toString() const {
            stringstream ss (stringstream::in | stringstream::out);
            ss << jour() << "jour" << (jour()>1?"s ":" ");
            ss << hr() << "hr" << (hr()>1?"s ":" ");
            ss << min() << "min" << (min()>1?"s ":" ");
            ss << sec() << "sec";
            return ss.str();}
};

// le cout est un flux de sortie (output stream)
// donc on utilise un ostream
    inline ostream&
operator<<(ostream &gauche, const Horloge &droit) { // fonction

        gauche << droit.toString();
        return gauche;
        // important de retourner le ostream pour chainer des cout
    }

// conversion implicite de int à Horloge
const Horloge operator+
                (const Horloge &gauche, const Horloge &droit);
const Horloge operator-
                (const Horloge &gauche, const Horloge &droit);


#endif // HORLOGE3_H
