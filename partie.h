#ifndef PARTIE_H
#define PARTIE_H

#include "plateau.h"
#include "joueur.h"
#include <QList>

class Partie
{
public:
    Partie();
    void ajouterJoueur(Joueur j);

private:
    Plateau         plateau;
    QList<Joueur>   joueurs_total; // Pour stocker tous les joueurs
    QList<Joueur>   joueurs; // pour stocker les joueurs actifs
};

#endif // PARTIE_H
