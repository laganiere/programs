
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(9);
    v.push_back(12);
    v.push_back(4);
    v.push_back(225);
    v.push_back(3);

    vector<int>::iterator it;

    it = find_if(v.begin(),v.end(),bind2nd(less<int>(),7));
    cout << "La premiere valeur inferieure a 7 est "
         << *it << endl;

    vector<int> v2;
    v2.push_back(19);
    v2.push_back(112);
    v2.push_back(14);
    v2.push_back(25);
    v2.push_back(23);

    it = find_first_of(v.begin(),v.end(),
                                v2.begin(),v2.end(),greater<int>());
    cout << "La premiere valeur dans le vecteur est "
         << *it << endl;
}

/*---------------------- resultat --------------------------*\
    La premiere valeur inferieure a 7 est 4
    La premiere valeur dans le vecteur est 225
\*----------------------------------------------------------*/
