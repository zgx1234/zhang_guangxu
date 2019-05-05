#include <iostream>

using namespace std;

int main()
{
    cout<<"a)"<<endl;
    int a=0;
    int *number=&a;
    cout<<*number<<endl;
    cout<<"b)"<<endl;
    double b=1;
    double *realPtr;
    double *integerPtr;
    realPtr=&b;
    integerPtr=realPtr;
    cout<<*realPtr<<endl;
    cout<<*integerPtr<<endl;
    cout<<"c)"<<endl;
    int *x;
    int *y;
    x=y=&a;
    cout<<*x<<endl;
    cout<<*y<<endl;
    cout<<"d)"<<endl;
    char s[]="this is a pig";
    for(int i=0;*(s+i)!='\0';++i)
        cout<<*(s+i)<<' ';
    cout<<"e)"<<endl;
    short *numPtr,result=3;
    numPtr=&result;
    auto *genericPtr=numPtr;
    result=*genericPtr+7;
    cout<<result<<endl;
    cout<<"f)"<<endl;
    double x1=19.34;
    double *xPtr=&x1;
    cout<<*xPtr<<endl;

    return 0;
}
