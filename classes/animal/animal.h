
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

namespace faune1 {

class Animal
{
private:
    double poids;

protected:
    void grossit(double w) {poids += w; }

public:
    Animal(double poids) : poids(poids) { }
    double getPoids() const { return poids; }

};

class Herbivore: public Animal {
public:
    Herbivore(double poids) : Animal(poids) { }
    void broute() { grossit(0.1); }
};

class Carnivore : public Animal {
public:
    Carnivore (double poids): Animal(poids) { }
    void mange(Animal proie) { grossit(proie.getPoids() * 0.1); }

};

class Poule : public Herbivore {
public:
    Poule(double poids) : Herbivore(poids) { }
};

class Humain : public Herbivore, public Carnivore {
public:
    // ce constructeur cré deux animaux
    Humain(double poids) : Carnivore(poids), Herbivore(poids) { }
};

}

#endif // ANIMAL_H
