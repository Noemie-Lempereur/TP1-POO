#include <iostream>
#include "voiture.h"
using namespace std;

int main() {

    //Création des variables qui vont permettre de créer l'objet voiture
    int age;
    int prix;
    int km;
    Voiture::typeVoiture type;
    int type2;
    Voiture::aspectVoiture aspect;
    int aspect2;

    //Demande l'age de la voiture à l'utilisateur
    cout<<"Quel est l'année de fabrication de la voiture que vous vendez ?"<<endl;
    cin>>age;

    //Demande le prix de la voiture à l'utilisateur
    cout<<"A quel prix vendez-vous la voiture ?"<<endl;
    cin>>prix;

    //Demande le kilometrage de la voiture à l'utilisateur
    cout<<"Combien de kilometrages possède le compteur de la voiture que vous vendez ?"<<endl;
    cin>>km;

    //Demande le type de la voiture à l'utilisateur
    cout<<"Quel est le type de la voiture que vous vendez (taper le nombre correspondant) ?"<<endl;
    cout<<"1- Essence"<<endl;
    cout<<"2- Diesel"<<endl;
    cout<<"3- Electrique"<<endl;
    cin>>type2;

    switch (type2) {
        case 1:
            type=Voiture::Essence;
            break;
        case 2:
            type=Voiture::Diesel;
            break;
        case 3:
            type=Voiture::Electrique;
            break;
        default:
            cout<< "error pas dans la liste"<<endl;

    }


//Demande l'aspect de la voiture à l'utilisateur
    cout<<"Quel est l'aspect de la voiture que vous vendez (taper le nombre correspondant) ?"<<endl;
    cout<<"1- Mauvais"<<endl;
    cout<<"2- Moyen"<<endl;
    cout<<"3- Bon"<<endl;
    cout<<"4- Excellent"<<endl;
    cin>>aspect2;
    switch (aspect2) {
        case 1:
            aspect=Voiture::Mauvais;
            break;
        case 2:
            aspect=Voiture::Moyen;
            break;
        case 3:
            aspect=Voiture::Bon;
            break;
        case 4:
            aspect=Voiture::Excellent;
            break;
        default:
            cout<< "error pas dans la liste"<<endl;

    }


    Voiture voiture = Voiture(age,prix,km,type,aspect); //création de la voiture de l'utilisateur
    cout<< "Prix demandé par le vendeur "<< voiture.getPrix()<<" $CAD"<<endl;   //afffichage du prix demandé par l'utilisateur
    return 0;
}
