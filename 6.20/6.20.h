#include <iostream>
using namespace std;
int multiple(int number1,int number2)
{
    int x=0;
    x=number2%number1;

    if(x==0)
    cout<<"true";
    else
        cout<<"false";
    return x;



}
