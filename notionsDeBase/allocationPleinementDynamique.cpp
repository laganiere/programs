
int main() {

    int dim1 = 10, dim2 = 20;
    int **tab;

    tab = new int *[dim1];

    // memoire allouee de facon non-consecutive
    for (int i = 0; i < dim1; i++) {
        tab[i] = new int[dim2];
    }

    tab[1][3] = 7;

    for (int i=0; i < dim1; i++)
        delete[] tab[i];
    delete[] tab;


    // ou encore pour avoir allocation memoire contigue    

    int *tmp = new int[dim1*dim2];
    *(tmp + 2*dim2+3) = 7; // tab[2][3]
    int ** tab = new int*[dim1];

    for (int i = 0; i < dim1; i++)
        tab[i] = &tmp[i*dim2];

    delete[] tab; 
    delete[] tmp;

}
