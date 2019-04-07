#include <iostream>

using namespace std;

int main()
{
    int Max=0,n,counter=1;
    while (counter<=10)
    {
        cin>>n;
        counter++;
        if (Max<n)
            Max=n;
    }
        cout<<"The largest is "<<Max<<endl;


}
