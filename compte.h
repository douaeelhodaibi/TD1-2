#ifndef COMPTE_H
#define COMPTE_H


class Compte
{
    public:
        Compte();
        int numCompte;
        Compte(int num, const char *texte ,float solde);
        void ajouter_argent(Cfloat somme);
        bool retirer_argent(float solde);
        void m_print() const;
        ~compte();
         char* nomprop;
    private:
        bool state;
        //float solde;

};

#endif // COMPTE_H
