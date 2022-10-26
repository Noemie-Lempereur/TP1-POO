#ifndef TP1_VOITURE_H
#define TP1_VOITURE_H

#include <iostream>

class Voiture {
protected:
    int annee;  //année de production de la voiture
    int prix;   //prix demandé par le vendeur
    float kilometrage;  //nombre de kilometrage de la voiture
public : enum aspectVoiture{Mauvais, Moyen, Bon, Excellent}; //Differents aspects possible du véhicule
protected:
    aspectVoiture aspect;//Note de l'aspect du véhicule
public:
    Voiture(int anneeP, int prixA, float km, aspectVoiture aspectV);  //Constructeur de la classe Voiture, on a besoin de toutes les informations sauf le liquide pour mettre la voiture en vente
    int getAnnee(); //renvoie l'année de production de la voiture à vendre
    int getPrix();//renvoie le prix attendu par le vendeur
    float getKilometrage(); //renvoie le nombre de kms qu'a effectué la voiture
    aspectVoiture getAspect();  //donne l'aspect du vehicule
};
#endif //TP1_VOITURE_H
