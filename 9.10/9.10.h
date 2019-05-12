#ifndef TIME_H
#define TIME_H

class Time
{
public:
   Time( int = 0, int = 0, int = 0 ); // default constructor
   bool setTime( int, int, int ); // set hour, minute, second
   bool setHour( int ); // set hour
   bool setMinute( int ); // set minute
   bool setSecond( int ); // set second
   int getHour(); // get hour
   int getMinute(); // get minute
   int getSecond(); // get second
   void printUniversal(); // print universal time
   void printStandard(); // print standard time
private:
   int hour; // 0-23
   int minute; // 0-59
   int second; // 0-59
}; // end class Time

#endif
