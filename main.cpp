#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    cout <<"Enter two integers";
    cout <<"The first integer x= ";
    cin >>x;
    cout <<"The second integer y= ";
    cin >>y;
    if (x>y)
    cout <<x<<"is large";
    if (x<y)
    cout <<y<<"is large";
    if (x==y)
    cout <<"These numbers are equal";

    return 0;
}
