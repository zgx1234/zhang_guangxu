#include <iostream>
#include <array>
#include <iomanip>
using namespace std;
const size_t rows=2;
const size_t columns =3;
int main()
{
    int smallest =0;
    int sum =0;
    array<array<int,columns>,rows>t={1,2,3,4,5,6};
    t[0][1]=0;
    t[0][0]=0;
    t[0][1]=0;
    t[0][2]=0;
    t[1][0]=0;
    t[1][1]=0;
    t[1][2]=0;
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=2;j++)
        {
            t[i][j]=0;

        }
    }
    for(auto &A :t)

        for(auto &a :A)
        a =0;
    for(int q=0;q<=1;q++)
    {
        for(int w=0;w<=2;w++)
        {
            cin>>t[q][w];
        }
    }
    for(int e=0;e<=1;e++)
    {
        for(int r=0;r<=2;r++)
        {
            if(smallest>t[e][r])
                smallest=t[e][r];

        }
    }

    cout<<"The smallest is "<<smallest;
    for(int y=0;y<=2;y++)
        cout<<t[0][y];
    for(int u=0;u<=2;u++)
    sum=sum+t[0][u];
    cout<<" The sum is "<<sum;
    cout <<setw(7)<<"0列"<<setw(9)<<"1列"<<setw(9)<<"2列";
    cout<<"0行"<<setw(3)<<t[0][0]<<setw(4)<<t[0][1]<<setw(4)<<t[0][2];
    cout<<"1行"<<setw(3)<<t[1][0]<<setw(4)<<t[1][1]<<setw(4)<<t[1][2];

}
