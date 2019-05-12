#include <iostream>
#include <ctime>

using namespace std;

class Time
{
public:
    explicit Time()
    {
        nowtime=time(0);
        struct tm *Tptr=localtime(&nowtime);
        year=Tptr->tm_year+1900;
        month=Tptr->tm_mon+1;
        day=Tptr->tm_mday;
        hour=Tptr->tm_hour;
        minth=Tptr->tm_min;
        s=Tptr->tm_sec;
    }
    void outtime(void)
    {
        cout<<year<<"-"<<month<<"-"<<day<<" "<<hour<<":"<<minth<<":"<<s<<endl;
    }
private:
    time_t nowtime;
    int year;
    int month;
    int day;
    int hour;
    int minth;
    int s;
};

int main()
{
    Time mytime;
    mytime.outtime();

    return 0;
}
