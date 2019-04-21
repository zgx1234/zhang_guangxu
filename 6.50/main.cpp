#include <iostream>

using namespace std;
double tripleBYReference(double&);
int main()
{
    double count;
    cout<<"please enter a count you want "<<endl;
    cin>>count;
    cout<<"three times of count is "<<tripleBYReference(count)<<endl;
    cout<<"count is "<<count;
}
double tripleBYReference(double&numberRef)
{
    return numberRef=3.0*numberRef;
}
