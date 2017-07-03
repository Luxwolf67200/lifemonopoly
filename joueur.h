#ifndef JOUEUR_H
#define JOUEUR_H
#include <QString>
#include <iostream>
#include "compte.h"


class Joueur
{
public:
    Joueur(QString _nom);

    virtual ~Joueur();

    void consultercompte();
    void crediter();
    void debiter();

private:

    QString nom;
    Compte* compte;


};



#endif // JOUEUR_H
