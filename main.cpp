#include <iostream>

using namespace std;

class Date
{
public:
    Date(int l,int m,int n)
    {
        setmonth(l);
        setday(m);
        setyear(n);
    }
    int setmonth(int j)
    {
        month=j;
    }
    int getmonth()
    {
        return month;
    }

    int setday(int k)
    {
        day=k;
    }
    int getday()
    {

        return day;
    }
    int setyear(int p)
    {
        year=p;
    }
    int getyear()
    {

        return year;
    }

    void displayDate()
    {
        cout<<"The Date is "<<getmonth()<<"/"<<getday()<<"/"<<getyear();
    }
private:
    int month;
    int day;
    int year;


};
