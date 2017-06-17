#ifndef COMPTE_H
#define COMPTE_H
#include <QString>
#include <iostream>

class Compte
{
public:
    Compte();
    Compte(int _sold);


    int getsold();
    void consulterHistoire();
    void ajouter(int _entrer, QString _destinataire);
    void retirer(int _sortie);

    virtual ~Compte();


protected:
    int _sold;
//    typename ::std::pair<QString, int> transaction;
//    QList< transaction > _history;


};
#endif // COMPTE_H
