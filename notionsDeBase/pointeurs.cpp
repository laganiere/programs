
#include <iostream>

void fct(int *p) {
    *p = 7;
}

int main() {
    int *p; // Déclaration d'un pointeur à une variable int
    int a = 2;
    int x;


    p = &a; // & indique l'adresse d'une variable
    x = 3;
    fct(&x); // x = 7

    std::cout << "*p=" << *p
            << ", adresses p et &a=" << &a
            << ", x=" << x
            << std::endl;

    int b = 3;
    const int c = 2;
    int const *pa; // pointeur à des const int
    const int *paa; // pointeur à des const int

    pa = &c; // ne peut pas être utilisé pour modifier b
	// un pointeur a des constantes peut pointer sur des non-const
    pa = &b; // ne peut pas être utilisé pour modifier b

    int * const pb = &b; // pointeur constant à des int


    int const* const pa2 = &c; // pointeur constant à des const int
    const int * const paa2 = &a; // pointeur constant à des const int

    int *px; // pointeur à des entiers
    int **ppx; // pointeur à un pointeur

    int y; // entier

    px = &x;
    *px = 8;
    ppx = &px;

    std::cout << "*px=" << *px << ", **ppx=" << **ppx << std::endl;


    *ppx = &y;
    **ppx = 7;

    /*--------------- résultat ------------------------*\
      *p=2, adresses p et &a=0x7fff5fbffa4c, x=7
      *px=8, **ppx=8
    \*-------------------------------------------------*/
}

/* Pointeurs et const
// pointers as arguments:
#include <iostream>
using namespace std;

void increment_all (int* start, int* stop)
{
  int * current = start;
  while (current != stop) {
    ++(*current);  // increment value pointed
    ++current;     // increment pointer
  }
}

void print_all (const int* start, const int* stop)
{
  const int * current = start;
  while (current != stop) {
    cout << *current << '\n';
    ++current;     // increment pointer
  }
}

int main ()
{
  int numbers[] = {10,20,30};
  increment_all (numbers,numbers+3);
  print_all (numbers,numbers+3);
  return 0;
} */
