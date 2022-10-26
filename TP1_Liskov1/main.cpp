#include <iostream>
#include "Rectangle.h"
#include "Carre.h"

using namespace std;

void testAire(Rectangle rectangle); //fonction de test de l'aire d'un rectangle

int main() {
    float longueur; //creation d'une variable pour stocker la longueur du rectangle donné par l'utilisateur
    cout << "Entrez la longueur du rectangle en mètre" << endl;
    cin >> longueur;   //la variable longueur prend la valeur donnée par l'utilisateur

    float largeur;  //creation d'une variable pour stocker la largeur du rectangle donné par l'utilisateur
    cout << "Entrez la largeur du rectangle en mètre" << endl;
    cin >> largeur;   //la variable largeur prend la valeur donnée par l'utilisateur

    Rectangle rectangle = Rectangle();  //création d'un rectangle
    rectangle.setLongueur(longueur);   //modification de la longueur du rectangle
    rectangle.setLargeur(largeur);    //modification de la largeur du rectangle
    cout << "Aire calculée : " << rectangle.aire() <<endl;    //Affiche l'aire du rectangle
    testAire(rectangle);    //test de l'aire du rectangle

    float size; //creation d'une variable pour stocker la taille du carré donné par l'utilisateur
    cout << "Entrez la longueur des côtés du carré en mètre" << endl;
    cin >> size;    //la variable size prend la valeur donnée par l'utilisateur

    Rectangle carre = Carre(size); //création d'un carré de côtés size mètre
    testAire(carre); //test de l'aire du carré

    Carre carre2 = Carre(size); //création d'un carré de côtés size mètre
    carre2.setLongueur(10);
    cout<<"Aire du carré2 : "<<carre2.aire()<<endl; //test de l'aire du carré 2

    return 0;
}

void testAire(Rectangle rectangle){
    rectangle.setLongueur(10);  //modifie la longueur
    cout << "Aire calculée après modification : " << rectangle.aire() <<endl;    //Affiche l'aire du rectangle
}
