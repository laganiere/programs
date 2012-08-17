
#ifndef MATRICE_H
#define MATRICE_H

class Matrice {
    private:
        int m[3][3];

    public:
        void set(int i, int j, int val);
        int get(int i, int j);
};

#endif // MATRICE_H
