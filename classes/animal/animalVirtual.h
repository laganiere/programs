
#ifndef ANIMALVIRTUAL_H
#define ANIMALVIRTUAL_H

#include <string>

namespace faune2 {
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

class Herbivore: public virtual Animal {
public:
    Herbivore(double poids) : Animal(poids) { }
    void broute() { grossit(0.1); }
};

class Carnivore : public virtual Animal {
public:
    Carnivore (double poids): Animal(poids) { }
    void mange(Animal proie) { grossit(proie.getPoids() * 0.1); }

};

class Poule : public Herbivore {
public:
    Poule(double poids) : Animal(poids), Herbivore(poids) { }
};

class Humain : public Herbivore, public Carnivore {
public:
    // ce constructeur cré un seul animal
    // la classe animal doit être créée au niveau humain
    Humain(double poids) : Animal(poids), Carnivore(poids),
                                            Herbivore(poids) { }
};

}
#endif // ANIMALVIRTUAL_H
