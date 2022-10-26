#ifndef TP1_FUEL_H
#define TP1_FUEL_H

#include "voiture.h"

class Fuel: public Voiture {
private:
    int liquideReservoir;   //carburant dans le reservoir
public:
    Fuel(int anneeP, int prixA, float km, Voiture::aspectVoiture aspectV, int liquide);   //constructeur de la classe Fuel qui utilise le constructeur de la classe Voiture
    void setLiquide(int liquide); //permet de modifier le carburant disponible (peut evoluer entre la mise en vente et l'achat)
    int getLiquide();//renvoie le carburant present dans la voiture en ce moment (peut evoluer entre la mise en vente et l'achat)
};

#endif //TP1_FUEL_H
