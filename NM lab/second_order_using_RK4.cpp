#include<iostream>
using namespace std;

double f(double x,double y,double z)
{
    return z;
}

double g(double x,double y, double z)
{
    return x* z + y;
}
double rk4(float x0, float y0,float z0, float h, float xn)
{

    float k1,k2,k3,k4,x1,y1,k,l,l1,l2,l3,z1;
    int count =0;
    while (x0<xn)
    {
        
        k1 =h* f(x0,y0,z0);
        l1 =h* g(x0,y0,z0);
        
        k2 = h*f(x0 + h/2, y0 + k1 *( h/2),z0 + l1 * (h/2));
        l2 = h*g(x0 + h/2, y0 + k1 *( h/2),z0 + l1 * (h/2));

        k3 = h*f(x0 + h/2, y0 + k2 *( h/2),z0 + l2 * (h/2));
        l3 = h*g(x0 + h/2, y0 + k2 *( h/2),z0 + l2 * (h/2));

        k4 = h*f(x0 + h, y0 + k3 * h, z0 + l3* h);
        k4 = h*g(x0 + h, y0 + k3 * h, z0 + l3* h);

        k = (k1 + 2 * k2 + 2* k2 + k4)/6;
        l = (l1 + 2 * l2 + 2* k2 + k4)/6;

        y1=y0 + k;
        x1 = x0 + h ;
        z1 = z0 + l;

        x0 = x1;
        y0 = y1;
        z0 = z1;
        count ++;

        cout<<count<<"\t"<<x0<<"\t"<<y0<<"\t"<<z0<<endl;
}
}

int main()
{
    rk4(0,1,-0.25,0.5,1);
    return 0;
}
