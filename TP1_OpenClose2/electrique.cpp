

#include "electrique.h"

void Electrique::setCapacite(int capacite) {//permet de modifier la capacité disponible (autonomie restante) (peut evoluer entre la mise en vente et l'achat)
    capaciteBatterie=capacite;
}

int Electrique::getCapacite() { //renvoie la capacité/autonomie presente dans la voiture en ce moment (peut evoluer entre la mise en vente et l'achat)
    return capaciteBatterie;
}

Electrique::Electrique(int anneeP1, int prixA1, float km1, Voiture::aspectVoiture aspectV1, int capacite) : Voiture(anneeP1, prixA1, km1, aspectV1) {
    //constructeur de la classe Electrique qui utilise le constructeur de la classe Voiture
    capaciteBatterie=capacite;
}