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
    void crediter(int _somme);
    void debiter(int _somme);

private:

    QString nom;
    Compte* compte;


};



#endif // JOUEUR_H
