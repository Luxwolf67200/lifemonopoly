#ifndef BIEN_IMMOBILER_H
#define BIEN_IMMOBILER_H

#include <QString>
#include "case.h"
#include "joueur.h"


class Bien_immobiler
{
public:

    Bien_immobiler(QString nom,int _prix,int _terrain,int _apart1,int _apart2,int _apart3,int _apart4,int _apart5);
    virtual ~Bien_immobiler();
private:
    QString couleur;
    QString nom;
    int prix ;
    int loyer[];
    int hypoteque;
    int nombreApart;

};

#endif // BIEN_IMMOBILER_H
