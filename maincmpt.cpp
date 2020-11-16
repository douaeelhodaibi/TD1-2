#include <iostream>
#include <string.h>
#include "Compte.h"
using namespace std;

int main()
{
    Compte cm;
    cm.numCompte=50003;
    strcpy(cm.nomProprietaire,Ahmed_Amine);
    cm.solde=8050.175;
    cm.ajouter_argent(1000);
    cm.m_print();

}
