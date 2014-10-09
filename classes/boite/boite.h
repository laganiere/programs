
#include <iostream>

using namespace std;

class Forme {

        double x,y;

public:

        Forme(double x=0., double y=0.) : x(x), y(y) {}
};

class Boite {

        int dim;
        int nels;
        Forme **formes;

public:
        Boite(int n): dim(n), nels(0) {

                cout << "constructeur - int" << endl;
                formes= new Forme*[dim];
        }

        Boite(const Boite& boite): dim(boite.nels),
                                        nels(boite.nels) {

                cout << "constructeur - copieur" << endl;

                formes= new Forme*[nels];

                for (int i=0; i<nels; i++) {

                        formes[i]= boite.formes[i];
                }
        }

        void add(Forme *f) {

                if (nels >= dim) {

                        Forme **tmp= new Forme*[dim*2];
                        for (int i=0; i<nels; i++) {

                                tmp[i]= formes[i];
                        }
                        delete[] formes;
                        formes=tmp;
                        dim*= 2;
                }

                formes[nels++]= f;
        }

        void vide() {

                for (int i=0; i<nels; i++) {

                        delete formes[i];
                }

                nels=0;
        }

        ~Boite() {


                cout << "destructeur" << endl;
                delete[] formes;
        }
};
