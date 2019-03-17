#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int z=0;
    int Sum=0;
    int Average=0;
    int Product=0;
    int Largest=0;
    int Smallest=0;
    cout <<"Enter three integers";
    cout <<"x=";
    cin >>x;
    cout <<"y=";
    cin >>y;
    cout <<"z=";
    cin >>z;
    Sum =x+y+z;
    cout <<"Sum is "<<Sum<<endl;
    Average =(x+y+z)/3;
    cout <<"Average is "<<Average <<endl;
    Product =x*y*z;
    cout <<"Product is "<<Product<<endl;
    if (x<y)
    Largest =y;
    if (Largest<z)
    Largest =z;
    cout<<"Largest is"<<Largest <<endl;
    Smallest =x;
    if (Smallest<y)
    Smallest =y;
    if (Smallest <z)
    Smallest =z;
    cout <<"Smallest is"<<Smallest<<endl;
    return 0;

}
