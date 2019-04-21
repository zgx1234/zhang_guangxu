#include <iostream>

using namespace std;

int nixu(int x)
{
    int y=0;
    cin>>x;

    cout<<"The number in reverse order is ";
    do
    {
         y=x%10;
    cout<<y;
    x/=10;
    }

    while(x!=0);
        cout<<endl;
    return 0;
}

int main()
{
    cout<<"Enter the number";
    int x=0;

    cout<<nixu(x)<<endl;
    return 0;


}
