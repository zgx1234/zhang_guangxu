#include <iostream>

using namespace std;

int main()
{


    int i=0;
    cin>>i;
    for(;i<=5;i++)
    {
        int n=1;
        for(int j=1;j<=i;j++)
        {
           n=n*j;
        }
        cout<<"\n"<<n;
    }
    return 0;
    }


