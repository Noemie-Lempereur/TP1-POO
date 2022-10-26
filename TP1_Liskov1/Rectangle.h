#ifndef TP1_RECTANGLE_H
#define TP1_RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle{
private:
    float largeur; //largeur du rectangle en m
    float longueur; //longueur du rectangle en m
public:
    Rectangle(); //Constructeur de la classe rectangle
    Rectangle(float largeurEdit, float longueurEdit); //Constructeur de la classe rectangle et initialisation à partir des valeurs fournies
    void setLargeur(float largeurEdit); //modification de la largeur du rectangle
    void setLongueur(float longueurEdit);   //modification de la longueur du rectangle
    float getLargeur(); //renvoie la valeur de la largeur
    float getLongueur();//renvoie la valeur de la longueur
    float perimetre(); //calcul du perimetre du rectangle
    float aire(); //calcul de l'aire du rectangle
};

#endif //TP1_RECTANGLE_H