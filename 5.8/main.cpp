#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int number=0;
    int counter=1;
    int smallest=0;
    cout<<"Enter the integers";
    cin>>number;
    smallest=number;
    for(n=number;counter<n;counter=counter+1)
        {
            cin>>number;
            if(smallest>number)
               smallest=number;
        }
        cout<<"the most smallest integer is "<<smallest;
        return 0;

}
