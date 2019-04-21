#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int flip(int x,int y)
{

    for(int a=1;a<=100;a++)
    {
        unsigned int i=1+rand()%2;
        switch(  i )
        {
             case 1:
                 ++x;
                 break;
             case 2:
                ++y;
                break;
        }
    }
cout<<"Head"<<setw(13)<<x<<endl;
cout<<"Tail"<<setw(13)<<y<<endl;
return 0;

}
int main()
{
    int x=0;
    int y=0;
    cout<<flip(x,y)<<endl;
    return 0;

}
