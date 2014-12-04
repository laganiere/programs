

#include "Trait.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	typedef double monType; 
	
    monType v1 = 1.00001;
    monType v2 = 0.99999;

	typedef trait_reel<monType> Trait;
	if (Trait::egal(v1,v2)) {	
       cout << "oui" << endl;
	}

    system("PAUSE");
    return 0;
}

