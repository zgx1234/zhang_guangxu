#include <iostream>

using namespace std;

void zero(long long *);
int add1AndSum(int *);

int main()
{
    long long a[1]={0};
    int b[1]={0};
    zero(a);
    add1AndSum(b);
    return 0;
}

void zero(long long *bigIntegers)
{
    cout<<bigIntegers[0];
}

int add1AndSum(int *add1AndSum)
{
    cout<<add1AndSum[0];

    return 0;
}
