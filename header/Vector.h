#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        Vector();
        Vector(double dX, double dY);
        virtual ~Vector();
        double getY();
        double getX();

        double Dot(Vector &v, Vector &w);

    protected:
    private:
        double x;
        double y;
};

#endif // VECTOR_H
