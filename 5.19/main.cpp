#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int x=0;
    double pi=4;
    double i=0;
    cout <<"enter the first integer";
    cin>>i;

    for(;i<=2001;i=i+2)
    {

        counter=counter+1;
        x=counter%2;
        if(x==1)
            for(int j=1;j<=1;j++)

        {

            pi=pi-4.0/i;
        }
        else
            for(int j=1;j<=1;j++)
        {

            pi=pi+4.0/i;
        }
        cout<<"\n"<<pi;
    }
    return 0;
}
