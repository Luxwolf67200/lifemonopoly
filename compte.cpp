
#include "compte.h"

Compte::Compte()
{
 std::cout<<"constructeur de compte"<< std::endl;
}

Compte::Compte(int _sold):_sold(_sold)
{
    std::cout << "constructeur class compte ,solde = " << this->_sold << std::endl;
}

Compte::~Compte()
{
 std::cout << "destructeur class COMPTE"<< std::endl;
}

int Compte::getsold()
{
    return  this->_sold;
}

void  Compte::consulterHistoire()
{
 //for(int i;)
}

void Compte::ajouter(int _entrer)
{
    this->_sold = _sold+_entrer;
//    this->_history



}

void Compte::retirer(int _sortie)
{
    this->_sold = _sold-_sortie;
//    this->_history


}
