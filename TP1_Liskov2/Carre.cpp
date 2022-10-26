#include "Carre.h"

Carre::Carre() {    //Constructeur de la classe carré
    setSize(0); //Initialisation de la longueur des côtés à 0m
}

Carre::Carre(float sizeEdit) {  //Constructeur de la classe carré
    setSize(sizeEdit);  //Initialisation de la longueur des côtés à sizeEdit m
}

void Carre::setSize(float sizeEdit) {
    size = sizeEdit;    //Changement de la longueur des côtés en m
}

float Carre::getSize(){
    return size;    //renvoie la valeur de la longueur des côtés en m
}


float Carre::perimetre() {  //calcul du perimetre du carré
    float sizeC = getSize();    //recupere la valeur de la longueur des côtés en m
    float peri = 4* sizeC;  //application de la formule du perimetre pour un carré
    return peri;   //renvoie la valeur calculee du perimetre en m
}

float Carre::aire() { //calcul de l'aire du carré
    float sizeC = getSize();   //recupere la valeur de la longueur des côtés en m
    float surface = sizeC * sizeC;  //application de la formule de calcul de l'aire pour un carré
    return surface;   //renvoie la valeur calculee de l'aire en m^2
}
