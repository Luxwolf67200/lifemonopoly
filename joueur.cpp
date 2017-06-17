#include "joueur.h"

Joueur::Joueur(QString _nom): nom(_nom)
{
    std::cout << "Constructeur class joueur"<< std::endl;
    this->compte = new Compte();
}

void Joueur::consultercompte()
{
    std::cout << " Compte du joueur "<< this->nom.toStdString() << " solde = " <<  this->compte->getsold() << std::endl;
}

Joueur::~Joueur()
{
    std::cout << "destructeur class joueur"<< std::endl;
    delete compte;
}
