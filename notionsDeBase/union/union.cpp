
#include <iostream>

using namespace std;

int main() {
    union clef {short x; char a[4]; };
    union clef uneClef;
    union clef c;

    // lire une clef dans une base de données par ex
    uneClef.x = 182;

    // demander une clef sous forme de caractères
	cout << "Entrez 4 caractères" << endl;
    cin >> c.a[0] >> c.a[1] >> c.a[2] >> c.a[3];

    // comparer les clefs
    cout << c.x << endl;
    if (c.x == uneClef.x) {
        cout << "C'est la bonne clef!" << endl;
    }

}
