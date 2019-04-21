#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int caishuzi( unsigned int number)
{
    cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type you first guess.";
    unsigned int x=1+rand()%1000;
    cin>>number;
    if(number==x)
        cout<<" Excellent! You guessed the number";
    else

    while(number!=x)
    {
        if(number<x)
        {
            cout<<"Too low. Try again.";
            cin>>number;
        }
        if(number>x)
        {
            cout<<"Too high. Try again.";
            cin>>number;
        }
    }

    cout<<" Excellent! You guessed the number";
    return 0;

}
int main()
{

    int number =0;

    cout<<caishuzi(number)<<endl;


}


