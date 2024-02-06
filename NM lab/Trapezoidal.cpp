#include<bits/stdc++.h>
#include<iostream>
using namespace std;

double f(double x)
{return x*x;}

double area(double a, double b,double n)
{
double h = (b-a)/n;
double counter = a;
double sum = f(a) + f(b);
counter+=h;
while (counter<b)
{
    sum+=2*f(counter);
    
    counter+=h;
}
cout<<"Area is : "<<(h/2)*sum;



}

int main() {
 area(0,10,4);
    return 0;
}


