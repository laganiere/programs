
int y ; // définition d'une variable globale

int fct(int x) { // définition d'une fonction
    x++ ;
    return x ;
}

int fct2(int x) {
    x = 2*fct(x);
    return x;
}
