
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
    ifstream is("nom.txt");
    istream_iterator<string> iif(is);
    istream_iterator<string> eof;

    vector<string> v(iif,eof);
    ostream_iterator<string> oo(std::cout);

    cout << v.size() << endl;

    for(vector<string>::iterator it = v.begin();
                            it != v.end(); it++, oo++) {
        *oo = *it;
        *oo = "\n";
    }

    is.close();
    is.open("nom.txt");
    istream_iterator<char> ii(is);
    istream_iterator<char> ceof;

    cout << endl << "Fichier:" << endl;
    // La boucle suivante écrit à la console le contenu
    // du fichier.  Les espaces sont omis.
    // Si on ne veut pas sauter les délimitateurs, on devrait
    // utiliser istreambuf_iterator.
    while(ii != ceof) {
        fct(*ii);
        ii++;
    }
    cout << endl;
    is.close();

    return 0;
}
