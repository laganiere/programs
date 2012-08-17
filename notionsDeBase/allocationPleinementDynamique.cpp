
int main() {
    int dim = 5, dim1 = 3, dim2 = 4;
    int *tmp = new int[dim1*dim2];
    *(tmp + 2*dim1+3) = 7; // tab[2][3]
    int ** tab = new int*[dim];

    for (int i = 0; i < dim1; i++)
    tab[i] = &tmp[i*dim2];

    delete[] tab; // équivalent à delete[] tab[0]
    delete[] tmp;
}
