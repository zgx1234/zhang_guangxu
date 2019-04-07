#include <iostream>

using namespace std;

int main()
{
    int number =0;
    int counter =1;
    int average =0;
    int sum =0;
    cout<<"Enter the integers";
    for(counter =0;;counter=counter+1)
    {
        cin>>number;
        sum=sum+number;
        if(number==9999)
            break;

    }
    sum=sum-9999;
    average=sum/counter;
    cout<<"average= "<<average;
    return 0;

}

