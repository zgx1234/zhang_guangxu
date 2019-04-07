#include <iostream>

using namespace std;

int main()
{
    double e=1;
    int x=0;
    int i=0;
     cout<<"Enter the integer that you want";
     cin>>x;
     cin>>i;
    for(;i<=x;i++)
    {
        int n=1.0;
        for(int j=1;j<=i;j++)
        {
            n=n*j;

        }

         e=e+(1.0)/n;

    }
    cout<<"e= "<<e;
    return 0;
}
