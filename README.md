# TD1-2
//main.cpp
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

  cout<< "Numero de compte" << this->solde;
}
//compte.cpp
#include "Compte.h"
#unclude<iostream>
Compte::Compte()
{

}

 bool retirer_argent(Compte*cm)//solde suff
 {
if(this->solde >x)
    return true;
else
    return false;
 }
Complex Complex :: operator+(double x)
{
    Complex res;
    res= this->solde +x;
    return res;
}
void Compte ::m_print() const //affichage du solde
{
    cout <<"le solde est:" << this->solde ;
}
//compte.h
#ifndef COMPTE_H
#define COMPTE_H


class Compte
{
    public:
        int numCompte;
        void init(Compte *cm);
        bool retirer_argent(Compte*cm);
        void m_print() const;
        float solde;
        char nomProprietaire[12] ;
        Compte();



}

#endif // COMPTE_H

