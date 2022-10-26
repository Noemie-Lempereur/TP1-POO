#ifndef TP1_CARRE_H
#define TP1_CARRE_H

#include "Rectangle.h"
#include <iostream>
using namespace std;

class Carre : public Rectangle {
public:
    Carre();    //Constructeur de la classe carré
    Carre(float size);  //Constructeur de la classe carré et initialisation à partir des valeurs fournies
    void setLongueur(float longueurEdit);  //modification de la taille des côtés du carré en m
    void setLargeur(float largeurEdit);   //modification de la taille des côtés du carré en m
};


#endif //TP1_CARRE_H
