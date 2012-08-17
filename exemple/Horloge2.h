
#ifndef HORLOGE2_H
#define HORLOGE2_H

#include <string>
#include <sstream>
#include <iostream>
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
        const string toString() const {
            stringstream ss (stringstream::in | stringstream::out);
            ss << jour() << "jour" << (jour()>1?"s ":" ");
            ss << hr() << "hr" << (hr()>1?"s ":" ");
            ss << min() << "min" << (min()>1?"s ":" ");
            ss << sec() << "sec";
            return ss.str();}
};


#endif // HORLOGE2_H
