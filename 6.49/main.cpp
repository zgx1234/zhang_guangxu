#include <iostream>

using namespace std;


inline double circleArea(const double r)
{
    double s;
    s=3.14*r*r;

    return s;
}
int main()
{
    cout << "Enter the R:" << endl;
    double r;
    cin>>r;
    cout<<"S= "<<circleArea(r)<<endl;

}
