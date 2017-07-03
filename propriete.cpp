#include "propriete.h"
#include "joueur.h"
Propriete::Propriete(QString nom,int _prix,int _terrain,int _apart1,int _apart2,int _apart3,int _apart4,int _apart5 )
{
    this->nom = nom;
    this->loyer[0] = _terrain;
    this->loyer[1] = _apart1;
    this->loyer[2] = _apart2;
    this->loyer[3] = _apart3;
    this->loyer[4] = _apart4;
    this->loyer[5] = _apart5;
    this->nombreApart = 0 ;
    this->prix = _prix;
}

Propriete::~Propriete()
{

}
