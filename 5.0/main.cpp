#include <iostream>
using namespace std;
int main()
{
    int counter =1;
    int largest =0;
    int number =0;
    while (counter<=10)
    {
        cout <<"Enter number:";
        cin>>number;
        counter =counter+1;
        if(largest<number)
        largest=number;
    }

    cout<<"The largest is"<<largest;
    return 0;


}


