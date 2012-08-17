
int main() {
    // dim1: pointeurs a des tableaux de 20
    int dim1 = 5;
    int (*tab)[20] = new int[dim1][20];
    tab[1][2]= 7; delete[] tab;
}
