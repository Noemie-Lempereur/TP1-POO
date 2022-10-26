
#include "voiture.h"

Voiture::Voiture(int anneeP, int prixA, float km, typeVoiture typeV, aspectVoiture aspectV) { //Constructeur de la classe Voiture, on a besoin de toutes les informations sauf le liquide pour mettre la voiture en vente
    annee=anneeP;
    prix=prixA;
    kilometrage=km;
    type=typeV;
    aspect=aspectV;
    liquideReservoir=0;
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

Voiture::typeVoiture Voiture::getType() {  //donne le type du véhicule
    return type;
}

Voiture::aspectVoiture Voiture::getAspect() { //donne l'aspect du vehicule
    return aspect;
}

float Voiture::getLquideReservoir() {    //renvoie le carburant present dans la voiture en ce moment (peut evoluer entre la mise en vente et l'achat)
    if (getType() != Electrique) {  //verifie que la voiture n'est pas electrique
        return liquideReservoir;
    } else{
        std::cout<<"Pas de liquide dans une voiture électrique"<<std::endl;
        return 0;
    }
}

void Voiture::setLiquidReservoir(float liquide) {   //permet de modifier le carburant disponible, voitures electriques ne possedent pas de carburant
    if (getType() != Electrique) {  //verifie que la voiture n'est pas electrique
        liquideReservoir=liquide;
    } else{
        std::cout<<"Pas de liquide dans une voiture électrique"<<std::endl;
    }
}
