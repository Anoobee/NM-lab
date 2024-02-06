#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class simson1
{
    private:
    double data[10][2];
    int n;

    public:
    void get_data()
    {
        cout<<"Enter the number of data : ";
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>data[i][0]>>data[i][1];
        }
    }

    double area()
{
    double a=data[0][0], b=data[n-1][0];

double h = (b-a)/n;
double counter = a;
double sum = data[0][1] + data[n-1][1];

for(int i = 1 ; i<n-1;i++)
{
if(i%2==0)
sum+=2*data[i][1];
else
{
    sum+=4*data[i][0];
}
}


cout<<"Area is : "<<(h/3)*sum;



}

};



int main() {

simson1 s1;
s1.get_data();
s1.area();

return 0;
}


