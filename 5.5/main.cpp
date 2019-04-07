#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int number=0;
    int counter=1;
    int sum=0;
    cout<<"Enter the integers";
    cin>>number;
    sum=number;
    for(n=number;counter<n;counter=counter+1)
        {
            cin>>number;
            sum=sum+number;
        }
        if(n==1)
            cout<<"the sum is 1"<<endl;
        else
            cout<<"the sum is "<<sum;
        return 0;




}
