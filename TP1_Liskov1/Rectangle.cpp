#include "Rectangle.h"

Rectangle::Rectangle() {    //Constructeur de la classe rectangle
    setLargeur(0);  //Initialisation à 0m de largeur
    setLongueur(0); //Initialisation à 0m de longueur
}

Rectangle::Rectangle(float largeurEdit, float longueurEdit) {    //Constructeur de la classe rectangle
    setLargeur(largeurEdit);//Initialisation à largeurEdit m de largeur
    setLongueur(longueurEdit); //Initialisation à longueurEdit m de longueur
}

void Rectangle::setLargeur(float largeurEdit) {
    largeur=largeurEdit;    //Changement de la largeur en m
}

void Rectangle::setLongueur(float longueurEdit) {
    longueur=longueurEdit;  // Changement de la longueur en m
}

float Rectangle::getLargeur() {
    return largeur; //renvoie la valeur de la largeur en m
}

float Rectangle::getLongueur() {
    return longueur;//renvoie la valeur de la longueur en m
}

float Rectangle::perimetre() {  //calcul du perimetre du rectangle
    float larg = getLargeur();  //recupere la valeur de la largeur en m
    float longu = getLongueur(); //recupere la valeur de la longueur en m
    float peri = 2*larg + 2*longu;  //application de la formule du perimetre pour un rectangle
    return peri;    //renvoie la valeur calculee du perimetre en m
}

float Rectangle::aire() { //calcul de l'aire du rectangle
    float larg = getLargeur();    //recupere la valeur de la largeur en m
    float longu = getLongueur(); //recupere la valeur de la longueur en m
    float surface = larg * longu;  //application de la formule de l'aire pour un rectangle
    return surface;   //renvoie la valeur calculee de l'aire en m^2
}

