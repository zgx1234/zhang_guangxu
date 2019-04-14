#include <iostream>
#include"6.18.h"
using namespace std;
int main()
{
    int base=0;
    int exponent=0;
    cout<<"Enter two numbers";
    cin>>base;
    cin>>exponent;

    cout<<"The integerPower is "<<integerPower(base,exponent)<<endl;
    return 0;
}

