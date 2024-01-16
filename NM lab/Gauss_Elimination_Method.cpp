#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class GEM{
    private:
    int n;
    double matrix[100][100],x[100];
    public:
    void get_data()
    {
        cout<<"Enter the number of eqn to solve "<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0; j<n+1;j++)
            cin>>matrix[i][j];
        }
    }

    void clac()
    {
        for(int j =0;j<n;j++){
            for(int i=0;i<n;i++)
            {
                if(i==j) continue;
                double scalar =(matrix[i][j]/matrix[j][j]);
                for (int k =0;k<n+1;k++)
                {
                    matrix[i][k]=matrix[i][k]-scalar*matrix[j][k];
                }
            }
        }
    }

    

    void ans()
    {
        
        x[n-1]=matrix[n-1][n]/matrix[n-1][n-1];
        cout<<matrix[n-1][n]/matrix[n-1][n-1]<<endl;
        for (int i=n-1;i>=0;i--)
        {
            double sum=0;
            for(int j = i+1;j<=n;j++)
            {
                sum+=matrix[i][n]*x[j];
            }
            x[i]=(matrix[i][n]-sum)/matrix[i][i];
            cout<<x[i]<<endl;
        }
    }


};



int main(){
    cout<<"hell"<<endl;
    GEM m1;
    m1.get_data();
    m1.clac();
    m1.ans();
    return 0;
}