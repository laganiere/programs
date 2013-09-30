
int main() {

    // int *p[dim];   pointeur de dim ptrs a des ints
    // int (*p)[dim]  pointeur a des tableaux de dim ints

    int dim1 = 5;
    int (*tab)[20] = new int[dim1][20];
    
    tab[1][2]= 7; 
    
    delete[] tab;
}
