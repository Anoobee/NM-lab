#include<bits/stdc++.h>
#include<iostream>
using namespace std;

double fun(double x,double y)
{
    return y;
}


double rk(float x0, float y0, float h, float xn)
{

    float m1,m2,m3,m4,x1,y1,m;
    int count =0;
    while (x0<xn)
    {
        
        m1 = fun(x0,y0);
        m2 = fun(x0 + h/2, y0 + m1 *( h/2));
        m3= fun(x0 + h/2, y0 + m2 *( h/2));
        m2 = fun(x0 + h, y0 + m3 * h);
        m = (m1 + 2 * m2 + 2* m2 + m4)/6;

        y1=y0 + h * m;
        x1 = x0 + h ;
        x0 = x1;
        y0 = y1;
        count ++;

        cout<<count<<"\t"<<x0<<"\t"<<y0<<endl;
}
}

int main()
{
    rk(0,1,1,10);
};
