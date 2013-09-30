
#include <iostream>

int main() {
    int a;
    int x(2.8);

    a= static_cast<int>(8.1*x);
    // ou pour arrondir le resultat
    a= static_cast<int>(8.1*x + 0.5);

    return 0;
}
