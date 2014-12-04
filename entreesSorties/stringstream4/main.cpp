
#include<iostream.h>
#include<fstream.h>

const char* filename("exemple.txt");

int main()
{
    char * buffer;

    long size;

    // ouverture en fichier binaire
    // en se positionnant a la fin du fichier (ios::ate)
    ifstream file (filename, ios::in|ios::binary|ios::ate);

    // tellg donne position courante (ici la fin du fichier)
    size = file.tellg();

    // seekg nous amene a la position 0 a partir du debut du fichier
    file.seekg(0, ios::beg);

    buffer = new char[size];

    // on tranfert tout le fichier dans le buffer
    file.read(buffer, size);

    file.close();
    cout << "Le fichier complet est dans le buffer." << endl;
    delete[] buffer;
    return 0;
}
