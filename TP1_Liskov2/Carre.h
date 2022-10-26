#ifndef TP1_CARRE_H
#define TP1_CARRE_H

#include "Forme.h"
#include <iostream>
using namespace std;

class Carre: public Forme{
private:
    float size; //taille des côtés du carré en m
public:
    Carre();//Constructeur de la classe carré
    Carre(float sizeEdit);//Constructeur de la classe carré et initialisation à partir des valeurs fournies
    void setSize(float sizeEdit); //modification de la taille des côtés du carré en m
    float getSize();    //renvoie la valeur de la taille du carré en m
    float aire() override; //calcul du perimetre du carré, remplace la méthode de calcul du perimetre de la forme
    float perimetre() override;//calcul de l'aire du carré, remplace la méthode de calcul de l'aire de la forme
};


#endif //TP1_CARRE_H
