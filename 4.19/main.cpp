#include <iostream>

using namespace std;

int main()
{
    cout<<"Every number mustn't input again\n";
    int counter=1;
    int number=0;
    int largest1=0;
    int largest2=0;
    while(counter<=10)
    {
        cout<<"Enter number=";
        cin>>number;
        counter=counter+1;

        if(largest2<number&&largest2<largest1)
            largest2=number;
        if(largest1<number)
            largest1=number;


    }
    cout<<"Maximum two numbers are"<<largest1<<"and"<<largest2;
    return 0;
}
