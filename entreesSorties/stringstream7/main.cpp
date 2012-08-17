#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s;
    int    a, b;              // opérandes
    int    resultat;
    char   op;                // opérateur
    istringstream instream;   // Déclarer un stringstream d'entrée

    while (getline(cin, s)) { // Line la ligne dans s
        instream.clear();     // Éliminer les erreurs précédentes.
        instream.str(s);      // Utiliser s comme source d'entrée.
  if ((instream >> a >> op >> b >> ws) && instream.eof()) {
   switch (op) {
       case '+': resultat = a + b; break;
       case '-': resultat = a - b; break;
       case '*': resultat = a * b; break;
       case '/': resultat = a / b; break;
       default : cout << "Opérateur invalide'" << op << endl;
                 continue;  // prochaine itération
   }
   cout << result << endl << endl;
} else {
   cout << "Entrée invalide." << endl;
}
    }
    return 0;
}
