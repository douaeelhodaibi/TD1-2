#include "Point.h"
#include <iostream>
#include <string>
using namespace std;

Point :: Point()
{
    this->x=0;
    this->y=0;
}
Point::Point(double x ,double y)
{
    this->x=x;
    this->y=y;

}

point::Point (const Point & P){
this->x=P.x;
this->y=P.y;
}
 void Point ::m_print () const
 {
    cout <<"(" << this->x << "," << this->y<<  ")"<< endl;// << operateur decalage a droite
 }
string Point ::tostring(){
    string s;
    s="("+ this->x +","+ this->y +")";
return s;

}
Point Point :: translate (double d)
{
    Point P;
    P.x=this->x + d;
    P.y=this->y + d;
    return P;
}
Point Point :: m_creator(double x, double y)//creer un point--impo de travailler avc this
{
    Point P1(x,y);//x et y sont des valeures
    return P1;
}
