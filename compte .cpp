#include "Compte.h"
#include<iostream>
#include<string.h>
Compte::Compte()
{
 this->numCompte =0;
 this->nomprop = NULL;
 this->solde= 0.0;
}

Compte::Compte(int num, const char*texte ,float solde)
{
    int taille=0;
    this->numCompte=num;
    this->solde =solde;
    for(int i=0;texte[i] "!\0";i++){
        taille++;
    }
    this->nomprop=new char[taille];
    strcpy(nomprop,texte);
}

 bool retirer_argent(float solde)//solde suff
 {
if(this->solde > solde)
    return true;
else
    return false;
 }
Complex Complex :: operator+(double x)//deposer
{
    Complex res;
    res= this->solde +x;
    return res;
}
void Compte ::m_print() const //affichage du solde
{
    cout <<"le solde est:" << this->solde << endl;
}


Compte :: ~Compte()
{
    delete[] nomprop;
}



