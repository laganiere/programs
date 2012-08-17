
#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<fstream>

using namespace std;

void fct(char ii) {
    cout << ii;
}

int main()
{
    vector<string> v;
    ostream_iterator<string> oo(std::cout);

    for(vector<string>::iterator it = v.begin();
                            it != v.end(); it++, oo++)
        *oo = *it;

    ifstream is("nom.txt");
    istream_iterator<char> ii(is);
    istream_iterator<char> eof;

    // La boucle suivante écrit à la console le contenu
    // du fichier.  Les espaces sont omis.
    // Si on ne veut pas sauter les délimitateurs, on devrait
    // utiliser istreambuf_iterator.
    while(ii != eof) {
        fct(*ii);
        ii++;
    }
    cout << endl;

}
