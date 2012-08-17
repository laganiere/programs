
#ifndef FORME_H
#define FORME_H

class Forme
{
private:
    int x, y;

public:
    Forme(int x=0, int y=0): x(x), y(y) {}
    Forme(const Forme& f) { x = f.x, y = f.y; }
    void set(int x, int y) { this->x=x; this->y=y;}
};

#endif // FORME_H
