#include <iostream>

using namespace std;

int integerPower(int base,unsigned int exponent)
{
    int resl=1;
    for (int x=1;x<=exponent;x=x+1)
        resl=resl*base;
    return resl;
}
