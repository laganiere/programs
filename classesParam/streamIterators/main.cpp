
#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<iterator>
#include<fstream>

using namespace std;

int main()
{
    list<string> l;
    ifstream is("nom.txt");
    ofstream os("nom2.txt");
    istream_iterator<string> ii(is);
    istream_iterator<string> eof;

    // "\n" est la chaine de caractère à la fin de
    // chaque string
    ostream_iterator<string>oo(os, "\n");

    list<string> liste(ii, eof);
    liste.sort();
    // tous les mots sont triés en ordre alphabétique

    std::copy(liste.begin(), liste.end(), oo);

    cout << liste.size() << " mots ont été copiés." << endl;
    // copie un intervalle à partir de la position
    // spécifiée par un itérateur

}
