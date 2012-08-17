
int dim1 = 10, dim2 = 20;
int **tab;

int main() {
    tab = new int *[dim1];

    for (int i = 0; i < dim1; i++) {
        tab[i] = new int[dim2];
    }

    tab[1][3] = 7;


    for (int i=0; i < dim1; i++)
        delete[] tab[i];

    delete[] tab;
}
