#include "partie.h"

Partie::Partie()
{

}

void Partie::ajouterJoueur(Joueur j)
{
    this->joueurs.append(j);
    this->joueurs_total.append(j);

}
