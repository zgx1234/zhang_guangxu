#include <iostream>

using namespace std;

int main()
{
    double e=1.0;
    int E=0;
    int x=0;
    int i=0;
    int y=1;
    int z=0;

     cout<<"Enter the integer that you want";
     cin>>z;
     cout<<"Input unknown x  ";
     cin>>x;
     cout<<"Enter the integer 1   ";
     cin>>i;
    for(;i<=z;i++)
    {
        int n=1.0;

        for(int j=1;j<=i;j++)
        {
            n=n*j;
            x=y*x;

        }

        E=e+x/n;
    }
    cout<<"E="<<E;
    return 0;

}



