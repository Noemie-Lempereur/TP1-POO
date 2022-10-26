#include <iostream>
#include "Rectangle.h"
#include "Carre.h"

using namespace std;

int main() {

    Forme* s[5]; //liste des différentes formes

    float size; //creation d'une variable pour stocker la taille du carré donné par l'utilisateur
    cout << "Entrez la longueur des côtés du carré 1 en mètre" << endl;
    cin >> size;    //la variable size prend la valeur donnée par l'utilisateur

    float longueur; //creation d'une variable pour stocker la longueur du rectangle donné par l'utilisateur
    cout << "Entrez la longueur du rectangle 1 en mètre" << endl;
    cin >> longueur;   //la variable longueur prend la valeur donnée par l'utilisateur

    float largeur;  //creation d'une variable pour stocker la largeur du rectangle donné par l'utilisateur
    cout << "Entrez la largeur du rectangle 1 en mètre" << endl;
    cin >> largeur;   //la variable largeur prend la valeur donnée par l'utilisateur

    s[0] = new Carre(size);    //création d'un carré de côté size mètre
    s[1] = new Rectangle(largeur,longueur);    //création d'un rectangle de largeur et de longueurdonné par l'utilisateur

    cout << "Entrez la longueur des côtés du carré 2 en mètre" << endl;
    cin >> size;   //la variable size prend la valeur donnée par l'utilisateur

    cout << "Entrez la longueur du rectangle 2 en mètre" << endl;
    cin >> longueur;   //la variable longueur prend la valeur donnée par l'utilisateur

    cout << "Entrez la largeur du rectangle 2 en mètre" << endl;
    cin >> largeur;    //la variable largeur prend la valeur donnée par l'utilisateur

    s[2] = new Carre(size);    //création d'un carré de côté size mètre
    s[3] = new Rectangle(largeur,longueur);     //création d'un rectangle de largeur et de longueurdonné par l'utilisateur

    cout << "Le carré 3 fait 8m de côté" << endl;

    s[4] = new Carre(8);    //création d'un carré de côté 8m


    for (int i=0; i<5; ++i) {
        float peri = s[i]->perimetre();
        float surface = s[i]->aire();
        cout << "La forme a un perimètre de " << peri << " mètre." << endl;
        cout << "La forme a une aire de " << surface << " mètre carré." << endl;    //affichage des perimetres et aires des formes contenues dans la liste
    }

    for (int i=0; i<5; ++i) {
        delete s[i];    //liberation de la mémoire
    }

    return 0;
}

