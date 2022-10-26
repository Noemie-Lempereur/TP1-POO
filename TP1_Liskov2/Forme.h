#ifndef TP1_FORME_H
#define TP1_FORME_H

#include <iostream>
using namespace std;


class Forme{
public:
    virtual float aire();   //calcul l'aire de la forme
    virtual float perimetre();//calcul le perimetre de la forme
};

#endif //TP1_FORME_H
