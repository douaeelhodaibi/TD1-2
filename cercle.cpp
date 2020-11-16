#include "Cercle.h"
#include <iostream>

using namespace std;
Cercle:: Cercle()
{
double x,y;
Point :: m_creator(x,y);
//Point p;//c est un objet
this->rayon=0;
}
Cercle::Cercle(double r, const Point & P)
{
    this->centre= P;
    this->rayon = r;
}

Cercle::Cercle( const Cercle & c)
{
    this->centre = Point (c.centre);
    this->rayon =c.rayon;
}
void Cercle :: m_print()
{
    cout <<" le rayon " << this->rayon ;
    this->centre.m_print() ;
}
double Cercle :: get_rayon () const
{
    return this->rayon;
}
void Cercle :: set_rayon(double r)//tjr void pour modifier
{
    this->rayon = r;
}
Cercle Cercle  ::translate (double d)
{
    Cercle res;
    res.centre=this->centre.translate (d);//translation du cercle = translation du centre
    res.rayon=this->rayon;//tjr le meme rayon
return res();
}
double Cercle :: surface() const
{
  double res;
  res=3.14*this->rayon * this->rayon;
  return res;
}
double Cercle :: perimetre()const{
double res ;
res=2*3.14 *this->rayon;
return res;
}
bool Point::operator == (const Point & a , const Point & b){//tester appartenance au cercle
   if (pow(a-(this->center),2)+pow(b-(this->center),2)< pow(this->rayon,2))
    return true;
else
    return false;}
bool Cercle :: operator==(double rr){//egalite des cercle
if (this->rayon == rr)
    return true ;
else
return false;
}
