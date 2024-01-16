#include<iostream>
using namespace std;

class inverse{
    private:
    int n;
    double matrix[100][100], imatrix[100][100];
    public:
    void get_data()
    {
        cout<<"Enter the order of squatre matix:"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0; j<n;j++)
        {    cin>>matrix[i][j];
            imatrix[i][j]=((i==j)?1:0);}
        }
    }

    void clac()
    {
        for(int j =0;j<n;j++){
            for(int i=0;i<n;i++)
            {
                if(i==j) continue;
                double scalar =(matrix[i][j]/matrix[j][j]);
                for (int k =0;k<n;k++)
                {
                    matrix[i][k]=matrix[i][k]-scalar*matrix[j][k];
                    imatrix[i][k]=imatrix[i][k]-scalar*imatrix[j][k];
                }
            }
        }
    }

    void ans()
    {
        for (int i=0;i<n;i++)
        
        {
            for (int j=0;j<n;j++)
        {cout<<imatrix[i][j]/matrix[i][i]<<"\t";}
        cout<<endl;

        }
    }


};



int main(){
    inverse m1;
    m1.get_data();
    m1.clac();
    m1.ans();
    return 0;
}