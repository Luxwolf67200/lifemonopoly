#ifndef PROPRIETE_H
#define PROPRIETE_H
#include "case.h"
#include "joueur.h"

class Propriete: public Case
{

public:
    Propriete(QString nom,int _prix,int _terrain,int _apart1,int _apart2,int _apart3,int _apart4,int _apart5 );
    virtual ~Propriete();



private:
    QString couleur;
    int prix ;
    int loyer[];
    int hypoteque;
    int nombreApart;


};

#endif // PROPRIETE_H
