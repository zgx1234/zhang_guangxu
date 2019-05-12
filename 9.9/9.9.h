#ifndef DATEANDTIME_H
#define DATEANDTIME_H

class DateAndTime
{
public:
   DateAndTime( int = 1, int = 1, int = 2000,
      int = 0, int = 0, int = 0 ); // default constructor
   void setDate( int, int, int ); // set month, day, year
   void setMonth( int ); // set month
   void setDay( int ); // set day
   void setYear( int ); // set year
   void nextDay(); // next day
   void setTime( int, int, int ); // set hour, minute, second
   void setHour( int ); // set hour
   void setMinute( int ); // set minute
   void setSecond( int ); // set second
   void tick(); // tick function
   int getMonth(); // get month
   int getDay(); // get day
   int getYear(); // get year
   int getHour(); // get hour
   int getMinute(); // get minute
   int getSecond(); // get second
   void printStandard(); // print standard time
   void printUniversal(); // print universal time
private:
   int month; // 1-12
   int day; // 1-31 (except February(leap year), April, June, Sept, Nov)
   int year; // 2000+
   int hour; // 0-23 (24 hour clock format)
   int minute; // 0-59
   int second; // 0-59
   bool leapYear(); // leap year
   int monthDays(); // days in month
}; // end class DateAndTime

#endif
