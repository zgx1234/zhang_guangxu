#include <iostream>

using namespace std;
double small(double number1,double number2,double number3)
{
    double s=number1;
    if(s>number2)
        s=number2;
    if(s>number3)
        s=number3;
    return s;
}

int main()
{

    double result;
    cout << "enter three number " ;
    double number1=0,number2=0,number3=0;
    cin>> number1>>number2>>number3;
    result=small(number1,number2,number3);
    cout<<"the result is "<<result;
    return 0;
}

