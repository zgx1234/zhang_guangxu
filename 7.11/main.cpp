#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,10>counts;
    for(int i=0;i<=9;i++)
        counts[i]=0;
    array<int,15>bonus;
    for(int i=0;i<15;i++)
        bonus[i]=bonus[i]+1;
    array<int,12>monthlyTemperatures;
    for(int i=0;i<12;i++)
        cin>>monthlyTemperatures[i];
    array<int,5>bestScores={1,2,3,4,5};
    cout<<bestScores[0]<<"\n"<<bestScores[1]<<"\n"<<bestScores[2]<<"\n"<<bestScores[3]<<"\n"<<bestScores[4];


}
