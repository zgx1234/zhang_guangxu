#include <iostream>
 #include"6.19.h"
using namespace std;

int main()
{
    double x=0.0;
    double y=0.0;

    cout<<"Enter two numbers";
    cin>>x;
    cin>>y;
    cout<<"hypotenuse is "<<hypotenuse(x,y)<<endl;
    return 0;
}
