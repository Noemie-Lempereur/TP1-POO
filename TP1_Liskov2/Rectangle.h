#ifndef TP1_RECTANGLE_H
#define TP1_RECTANGLE_H

#include <iostream>
#include "Forme.h"
using namespace std;

class Rectangle: public Forme{
private:
    float largeur;  //largeur du rectangle en m
    float longueur; //longueur du rectangle en m
public:
    Rectangle(); //Constructeur de la classe rectangle
    Rectangle(float largeurEdit, float longueurEdit); //Constructeur de la classe rectangle et initialisation à partir des valeurs fournies
    void setLargeur(float largeurEdit); //modification de la largeur du rectangle
    void setLongueur(float longueurEdit);   //modification de la longueur du rectangle
    float getLargeur(); //renvoie la valeur de la largeur
    float getLongueur();//renvoie la valeur de la longueur
    float perimetre() override; //calcul du perimetre du rectangle, remplace la méthode de calcul du perimetre de la forme
    float aire() override;//calcul de l'aire du rectangle, remplace la méthode de calcul de l'aire de la forme
};

#endif //TP1_RECTANGLE_H