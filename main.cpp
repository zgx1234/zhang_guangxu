#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int largest =0;
    int smallest =0;
    cout <<"Enter five integers";
    cout <<"a=";
    cin >>a;
    cout <<"b=";
    cin >>b;
    cout <<"c=";
    cin >>c;
    cout <<"d=";
    cin >>d;
    cout <<"e=";
    cin >>e;
    smallest=a;
    if(smallest>b)
    smallest=b;
    if(smallest>c)
    smallest=c;
    if(smallest>d)
    smallest=d;
    if(smallest>e)
    smallest=e;
    cout <<"smallest is"<<smallest<<endl;
    return 0;






}
