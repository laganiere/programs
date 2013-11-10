
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
    // construit un end-of-stream iterator
    istream_iterator<string> eof;

    // le 2ieme argument est le delimitateur
    // insere a la fin de chaque element
    ostream_iterator<string>oo(os, ";\n");

    list<string> liste(ii, eof);
    liste.sort();
    // tous les mots sont tries en ordre alphabetique

    std::copy(liste.begin(), liste.end(), oo);

    cout << liste.size() << " mots ont ete copies." << endl;
    // copie un intervalle a partir de la position
    // specifiee par un iterateur
}
