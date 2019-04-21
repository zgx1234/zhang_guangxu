#include <iostream>

using namespace std;
int qualityPoints(int averagegrades)
{
    cin>>averagegrades;
    if(averagegrades>=90&&averagegrades<=100)
        cout<<"4";
    if(averagegrades>=80&&averagegrades<90)
        cout<<"3";
    if(averagegrades>=70&&averagegrades<80)
        cout<<"2";
    if(averagegrades>=60&&averagegrades<70)
        cout<<"1";
    if(averagegrades<60)
       cout<<"0";
    return 0;

}
int main()
{
    cout<<"Enter the student's averagegrades";
    int averagegrades=0;
    cout<<qualityPoints(averagegrades)<<endl;
    return 0;

}
