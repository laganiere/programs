
#include <iostream>

template<typename T>

T* trouve(T* debut, T* fin, const T& v) {
    while (debut != fin && *debut != v)
        ++debut;
    return debut;
}

template<typename T>
T min(T g, T d) {
    return ((g<d)?g:d);
}

// il doit exister un template  pour lequel ce
// template est un cas particulier
template<>
char* min<char*>(char*g, char*d) {
    if (strcmp(g, d) < 0) return g;
    else return d;
}

int main()
{
    int v[10] = {1, 4, 7, 9, 14, 36, 42, 51, 56, 65};

    int *p = trouve (v, v+5, 7);
    if (p != v+5)
        std::cout << "On a trouvé." << std::endl;
    else
        std::cout << "On n'a pas trouvé." << std::endl;

    int *q = trouve (v, v+7, 56);
    if (q != v+7)
        std::cout << "On a trouvé." << std::endl;
    else
        std::cout << "On n'a pas trouvé." << std::endl;

    int x = 5, y = 7;
    double a = 4.2, b = 6.8;
    char c[] = "bonjour", d[] = "salut";

    int z = min(x, y);
    double w = min(a, b);

    // ne fonctionne pas sans le static_cast;
    // tous les types T doivent correspondre au même type.
    int u = min(static_cast<int>(a), y);

    // fait appel à la deuxième fonction template min;
    // un appel à la première fonction retournerait
    // le tableau char* avec la plus petite adresse
    char* s = min(c, d);

    std::cout << "z = " << z << std::endl;
    std::cout << "w = " << w << std::endl;
    std::cout << "u = " << u << std::endl;
    std::cout << "s = " << s << std::endl;


    /*----------------- résultat ----------------------*\
    On a trouvé.
    On n'a pas trouvé.
    z = 5
    w = 4.2
    u = 4
    s = bonjour
    \*-------------------------------------------------*/

}
