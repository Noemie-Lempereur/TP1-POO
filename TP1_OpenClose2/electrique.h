

#ifndef TP1_ELECTRIQUE_H
#define TP1_ELECTRIQUE_H
#include "voiture.h"

class Electrique : public Voiture {
private:
    int capaciteBatterie;   //batterie restante dans la voiture (autonomie)
public:
    Electrique(int anneeP1, int prixA1, float km1, aspectVoiture aspectV1, int capacite);   //constructeur de la classe Electrique qui utilise le constructeur de la classe Voiture
    void setCapacite(int capacite); //permet de modifier la capacité disponible (autonomie restante) (peut evoluer entre la mise en vente et l'achat)
    int getCapacite(); //renvoie la capacité/autonomie presente dans la voiture en ce moment (peut evoluer entre la mise en vente et l'achat)
};


#endif //TP1_ELECTRIQUE_H
