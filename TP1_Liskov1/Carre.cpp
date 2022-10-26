#include "Carre.h"

Carre::Carre() {    //Constructeur de la classe carré (longueur=largeur)
    setLargeur(0); //Initialisation de la largeur des côtés à 0m
    setLongueur(0); //Initialisation de la longueur des côtés à 0m
}

Carre::Carre(float size) {  //Constructeur de la classe carré (longueur=largeur)
    setLargeur(size);  //Initialisation de la largeur des côtés à size m
    setLongueur(size);  //Initialisation de la longueur des côtés à size m
}

void Carre::setLongueur(float longueurEdit) {   //Changement de la longueur des côtés en m
    Rectangle::setLargeur(longueurEdit); //carré -> largeur = longueur
    Rectangle::setLongueur(longueurEdit);  //carré -> largeur = longueur
}

void Carre::setLargeur(float largeurEdit) {   //Changement de la longueur des côtés en m
    Rectangle::setLargeur(largeurEdit);   //carré -> largeur = longueur
    Rectangle::setLongueur(largeurEdit);  //carré -> largeur = longueur
}

