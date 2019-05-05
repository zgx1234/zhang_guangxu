#include <iostream>

using namespace std;

int main()
{
    long long value1=200000;
    long long value2;
    long long *longPtr=&value1;
    cout<<*longPtr<<endl;
    value2=*longPtr;
    cout<<value2<<endl;
    cout<<&value1<<endl;
    cout<<longPtr<<endl;

    return 0;
}
