#ifndef POINT_H
#define POINT_H
#include <string.h>
#include "Cercle.h"

class Point
{
    //public:
       // Point();
       // Point(double,double);
      //  Point (const Point &P);//this modifiable
     //   void m_printPoint() const ;//l objet courant non modifiable
      //  string tostring();
       // Point translate(double d);
         private:
    Point();
    Point(double; double);
    Point (const Point &p);
    public:
    void m_print() const;
    Point translate(double d);
    static Point m_creator (double x, double y);//methode de classe
    private:
        double x;
        double y;
};

#endif // POINT_H
