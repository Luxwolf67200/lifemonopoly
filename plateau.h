#ifndef PLATEAU_H
#define PLATEAU_H
#include"case.h"

class Plateau
{
public:
    Plateau();

    virtual ~Plateau();

    Case* GetCase(int indice);




private:
Case* larue[];
int pactole;


};

#endif // PLATEAU_H
