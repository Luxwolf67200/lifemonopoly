#include "plateau.h"
#include <QString>
#include <iostream>
Plateau::Plateau()
{
    std::cout << "destructeur class plateau ,solde = "  << std::endl;

}

Plateau::~Plateau()
{
    std::cout << "destructeur class plateau ,solde = " << std::endl;
}

Case* Plateau::GetCase(int indice)
{
    return larue[indice];
}

