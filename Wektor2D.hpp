
#include <iostream>
#include <math.h>
    class Wektor2D
    {
    public:
        Wektor2D() { x=0.;y=0.;}
        Wektor2D(double vx, double vy)
        {
            x=vx;
            y=vy;
            //std::cout<<x<<'\n';
            //std::cout<<y<<'\n';
        }

        void setX (double vx) {x=vx;}
        void setY (double vy) {y=vy;}
        double getX () {return x;}
        double getY () {return y;}
    private:
        double x;
        double y;
    };

    Wektor2D operator+(Wektor2D v1,Wektor2D v2)
    {
        double x1t=v1.getX();
        double y1t=v1.getY();
        double x2t=v2.getX();
        double y2t=v2.getY();
        return Wektor2D{x1t+x2t,y1t+y2t};
    }

    double operator*(Wektor2D v1,Wektor2D v2)
    {
        double x1t=v1.getX();
        double y1t=v1.getY();
        double x2t=v2.getX();
        double y2t=v2.getY();
        double prod=x1t*x2t+y1t*y2t;
        return prod;
    };
