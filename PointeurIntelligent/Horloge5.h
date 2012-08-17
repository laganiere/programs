
#ifndef HORLOGE5_H
#define HORLOGE5_H

#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

class Horloge {

    private:

        long secondes;

    public:

        explicit Horloge(long sec=0);
        Horloge(int j, int hrs, int min, long sec);
        Horloge(const Horloge &t);
        ~Horloge();

        long sec() const {return secondes%60;}
        int min() const {return (secondes/60)%60;}
        int hr()  const {return (secondes/3600)%24;}
        int jour() const {return secondes/86400;}

        Horloge& operator=(long t) { secondes= t; return *this; }
        Horloge& operator+=(const Horloge &droit) {
                secondes+= droit.secondes; return *this; }
        Horloge& operator-=(const Horloge &droit) {
                secondes-= droit.secondes; return *this; }
        const Horloge operator~() const {
                Horloge t(*this);
                if (t.sec()<30) t.secondes-= t.sec();
                else t.secondes+= 60-t.sec(); return t; }
        Horloge& operator++() { secondes++; return *this; }
        const Horloge operator++(int) {
                Horloge tk(*this); ++(*this);
                return tk; }

        const string toString() const {
            stringstream ss (stringstream::in | stringstream::out);
            ss << jour() << "jour" << (jour()>1?"s ":" ");
            ss << hr() << "hr" << (hr()>1?"s ":" ");
            ss << min() << "min" << (min()>1?"s ":" ");
            ss << sec() << "sec";
            return ss.str();}

        operator int() const { return secondes; }

        friend ostream& operator<<(const ostream &gauche,
                                   const Horloge &droit);
};

    inline ostream&
operator<<(ostream &gauche, const Horloge &droit) {

        gauche << droit.toString();
        return gauche;
}

const Horloge operator+(const Horloge &gauche, const Horloge &droit);
const Horloge operator-(const Horloge &gauche, const Horloge &droit);



#endif // HORLOGE5_H
