
#include "voiture.h"

Voiture::Voiture(int anneeP, int prixA, float km, aspectVoiture aspectV) { //Constructeur de la classe Voiture, on a besoin de toutes les informations sauf le liquide pour mettre la voiture en vente
    annee=anneeP;
    prix=prixA;
    kilometrage=km;
    aspect=aspectV;
}

int Voiture::getAnnee() {  //renvoie l'année de production de la voiture à vendre
    return annee;
}

int Voiture::getPrix() {//renvoie le prix attendu par le vendeur
    return prix;
}

float Voiture::getKilometrage() {//renvoie le nombre de kms qu'a effectué la voiture
    return kilometrage;
}

Voiture::aspectVoiture Voiture::getAspect() { //donne l'aspect du vehicule
    return aspect;
}

