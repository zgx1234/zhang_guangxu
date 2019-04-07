#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    cout <<"Enter three sides of input triangle";
    cout <<"\na=";
    cin>>a;
    cout <<"\nb=";
    cin>>b;
    cout <<"\nc=";
    cin>>c;
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
        cout <<"OK";
    else
        cout <<"NO";
    return 0;
}
