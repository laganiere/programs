
#include "Trait2.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename T>
T plus2(T x) {

	if (est_pointeur<T>)
		return *x += 2;
	else	
		return x += static_cast<T>(2);
}

int main() {

    int a(7);
    int* b;

    b= &a;
	
    int x= plus2(a);
    int y= plus2(b);
	
    return 0;
}
