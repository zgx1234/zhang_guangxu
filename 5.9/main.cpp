#include <iostream>

using namespace std;

int main()
{
    int number=0;
    int x=0;
    int product=1;
    for(;number<15;)
    {
        cin>>number;
        x=number%2;
        product=product*number;

    }
    cout<<"the product is"<<product;
    return 0;







}
