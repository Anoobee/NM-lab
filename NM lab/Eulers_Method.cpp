#include<bits/stdc++.h>
#include<iostream>
using namespace std;

double fun(double x, double y)
    {
        return y + x;
    }


void euler(float x0,float y0, float h, float xn)
{
        int count =1;
    float y1 ,x1;
    while (x0<xn)

    {
        float slope = fun(x0,y0);
        y1 = y0 + h * slope;
        x1 = x0 + h;
        x0 = x1;
        y0 = y1;

        cout<<count <<"\t"<<x0<<"\t"<<y0<<endl;
        count ++;

        
if(count==10) return;
    }
    
}

int main()
{
    euler(0,1,0.5,10);
    return 0;
}
