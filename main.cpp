#include <QCoreApplication>
#include "joueur.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    {
        Joueur j ("Lucas");
        j.consultercompte();
    }

    return a.exec();
}
