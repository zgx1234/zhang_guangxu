#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
    unsigned int values[SIZE]={2,4,6,8,10};
    unsigned int *Ptr=&values[0];
    for(int i=0;i<SIZE;i++)
        cout<<values[i]<<" ";
    cout<<endl;
    Ptr=values;
    Ptr=&values[0];
    for(int i=0;i<SIZE;i++)
        cout<<*Ptr++<<" ";
    cout<<endl;
    for(int i=0;i<SIZE;i++)
    {
        cout<<*(values+i)<<" ";
    }
    cout<<endl;
    for(int i=0;i<SIZE;i++)
        cout<<*(&values[i])<<" ";
    cout<<endl;
    cout<<values[4]<<endl;;
    cout<<*(values+4)<<endl;
    cout<<*(&values[4])<<endl;
    Ptr=&values[0];
    cout<<*(Ptr+4)<<endl;
    cout<<"引用的是"<<Ptr<<"的地址"<<endl;
    cout<<"储存的值是"<<*Ptr<<endl;
    cout<<"vPtr-=4之后"<<endl;
    cout<<"引用的是"<<Ptr-4<<"的地址"<<endl;
    cout<<"储存的值是"<<*(Ptr-4)<<endl;

    return 0;
}
