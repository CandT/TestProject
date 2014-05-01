#include "Vector.h"

Vector::Vector()
{
    x = 0.0;
    y = 0.0;
}
Vector::Vector(double dX, double dY)
{
    x = dX;
    y = dY;
}
Vector::~Vector()
{
    //dtor
}
double Vector::getX()
{return x;}
double Vector::getY()
{return y;}

double Vector::Dot(Vector &v, Vector &w)
{
    return (v.getX()*w.getX() + v.getY()*w.getY());
}
