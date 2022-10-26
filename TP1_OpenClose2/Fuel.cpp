
#include "Fuel.h"

void Fuel::setLiquide(int liquide) { //permet de modifier le carburant disponible
    liquideReservoir=liquide;
}

int Fuel::getLiquide() {//renvoie le carburant present dans la voiture en ce moment (peut evoluer entre la mise en vente et l'achat)
    return liquideReservoir;
}


Fuel::Fuel(int anneeP1, int prixA1, float km1, aspectVoiture aspectV1, int liquide) : Voiture(anneeP1, prixA1, km1, aspectV1) {
    liquideReservoir=liquide;   //constructeur de la classe Fuel qui utilise le constructeur de la classe Voiture
}