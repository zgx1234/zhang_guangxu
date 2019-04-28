#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    int x=0;
    array<int ,11>probability={0};
    for(unsigned int roll=1;roll<=36000;++roll)
    {
        unsigned int face1 =1+rand()%6;
        unsigned int face2 =1+rand()%6;
        probability[face1+face2-2]++;
    }
    cout<<"probability"<<setw(13)<<"Sum";
    for(int i=0;i<11;i++)
    {
        x=i+2;
        cout<<"\n"<<setw(4)<<x<<setw(20)<<probability[i];
    }


}
