
// opérations de base de fichiers
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream myfile; // création du fichier
    myfile.open("exemple.txt"); // ouvrir
    myfile << "Writing this to a file. \n"; // écrit dans le fichier
    myfile.close(); // fermer
    return 0;
}
