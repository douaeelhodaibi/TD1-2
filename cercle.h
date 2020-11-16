#ifndef CERCLE _H
#define CERCLE _H


class Cercle
{
    public:

        Cercle (double , Point );
        Cercle(const Cercle &c);
        void m_print();
        double get_rayon() const ;//permet d acceder a rayon qui est prive
        void set_rayon(double r);//pour changer le rayon
        Cercle translate(double d);
        double surface()const;
        double perimetre()const;
        ~Cercle () {}

    private:
        double rayon;
        Point centre;
};

#endif // CERCLE _H
