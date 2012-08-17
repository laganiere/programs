
#ifndef LIREENTIER_H
#define LIREENTIER_H

#include <iostream>
#include <stdexcept>

using namespace std;

int LireEntier() {
   int x;
   cin >> x;

   if (cin.fail()) {
       string ligne;
       getline(cin, ligne);
       throw ligne;
   }
   if (x < 0)
       throw std::out_of_range("valeur négative");
   return x;
}

#endif // LIREENTIER_H
