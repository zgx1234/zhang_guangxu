#include <iostream>
int iseven(int number1)
{
    int n;
    n=number1%2;
    if(n==0)
        return true;
    else
        return false;
}
using namespace std;



int main()
{
    int number=0,result=0;
    cout << "enter a number  and enter -1 to end";
    cin>>number;
    while(number!= -1)
    {
        result=iseven(number);
        if(result==1)
        cout<<"the result is "<<result<<endl;
        cin>>number;
    }
    return 0;
}
