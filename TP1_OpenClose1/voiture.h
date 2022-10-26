#ifndef TP1_VOITURE_H
#define TP1_VOITURE_H

#include <iostream>

class Voiture {
private:
    int annee;  //année de production de la voiture
    int prix;   //prix demandé par le vendeur
    float kilometrage;  //nombre de kilometrage de la voiture
    float liquideReservoir;  //carburant dans le reservoir (pas pour voiture electrique)
public : enum typeVoiture{Essence, Electrique, Diesel};  //Differents types possibles du véhicule
public : enum aspectVoiture{Mauvais, Moyen, Bon, Excellent}; //Differents aspects possible du véhicule
private:
    typeVoiture type;//Type du véhicule
    aspectVoiture aspect;//Note de l'aspect du véhicule
public:
    Voiture(int anneeP, int prixA, float km, typeVoiture typeV,aspectVoiture aspectV);  //Constructeur de la classe Voiture, on a besoin de toutes les informations sauf le liquide pour mettre la voiture en vente
    int getAnnee(); //renvoie l'année de production de la voiture à vendre
    int getPrix();//renvoie le prix attendu par le vendeur
    float getKilometrage(); //renvoie le nombre de kms qu'a effectué la voiture
    typeVoiture getType();  //donne le type du véhicule
    aspectVoiture getAspect();  //donne l'aspect du vehicule
    float getLquideReservoir();     //renvoie le carburant present dans la voiture en ce moment (peut evoluer entre la mise en vente et l'achat)
    void setLiquidReservoir(float liquide);     //permet de modifier le carburant disponible, voitures electriques ne possedent pas de carburant
};
#endif //TP1_VOITURE_H
