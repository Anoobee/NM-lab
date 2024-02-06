#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class LagInt{

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

    void calc()
    {
        
        double ans=0,xp ;
        cout<<"enter the xp: ";
        cin>>xp;

        for(int i=0;i<n;i++)
        {
            double product = 1;
            for (int j=0;j<n;j++)
            {
                if(i==j)
                continue;

                product*=(xp - data[j][0])/(data[i][0]-data[j][0]);

            }
            ans+=data[i][1]*product;
        }
        cout<<"The value is : "<<ans<<endl;
    }

};

int main() {
    LagInt l1;
    l1.get_data();
    l1.calc();
    return 0;
}
