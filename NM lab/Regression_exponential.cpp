#include<iostream>
#include<cmath>

using namespace std;

class reg
{
  double sum_y=0, sum_xy=0, sum_xx=0, sum_x=0,detm;
  double data[100][2];
  int n;
    public:
  void getData()
  {
    cout<<"Enter the number of sample : ";
    cin>>n;

    for(int i =0;i<n;i++)
    {
        cin>>data[i][0];
        cin>>data[i][1];
    }
  }  

  void sum()
  {
    for(int i=0;i<n;i++)
    {
        sum_x+=data[i][0];
        sum_y+=log(data[i][1]);
        sum_xy +=data[i][0] * log(data[i][1]);
        sum_xx +=data[i][0] * data[i][0];
    }
  }

  void ans()
  {
    detm = n*sum_xx - sum_x*sum_x;
    
    cout<<" a : "<<exp((sum_y*sum_xx - sum_x*sum_xy)/detm)<<endl;
    cout<<" b : "<<(n*sum_xy - sum_x*sum_x)/detm<<endl;
  }



};

int main() {
    
    reg r;
    r.getData();
    r.sum();
    r.ans();
    return 0;
}