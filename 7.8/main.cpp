#include <iostream>
#include <array>
using namespace std;

int main()
{
    int largest=0;
    int smallest=0;
    int sum=0;
    array<int,6>s;
    cout<<s[6]<<endl;
    array<int,4>grades;
    cin>>grades[4];
    array<int,5>values;
    for(int i=0;i<=4;i++)
    {
        values[i]=8;
    }
    array<int,100>temperatures;
    for(int i=0;i<=99;i++)
    {
        sum=sum+temperatures[i];
    }
    cout<<"the sum of temperatures is"<<sum;
    array<int ,99>w;
    for(int i=0;i<=98;i++)
    {
        if(largest<w[i])
            largest=w[i];
        if(smallest>w[i])
            smallest=w[i];
    }
    cout<<"The largest is    "<<largest;
    cout<<"The smallest is  55 "<<smallest;


}
