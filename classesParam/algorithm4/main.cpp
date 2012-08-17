
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(9);
    v.push_back(12);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);

    vector<int>::iterator it;

    it = find_if(v.begin(),v.end(),bind2nd(less<int>(),7));
    cout << "La première valeur inférieure à 7 est "
         << *it << endl;

    it = find_first_of(v.begin(),v.end(),
                                v.begin(),v.end(),less<int>());
    cout << "La première valeur dans le vecteur est "
         << *it << endl;

    /*---------------------- résultat --------------------------*\
        La première valeur inférieure à 7 est 4
        La première valeur dans le vecteur est 9
    \*----------------------------------------------------------*/
}
