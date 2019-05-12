#include <iostream>
#include "9.10.h" // include definition of class Time
using namespace std;

Time::Time( int hr, int min, int sec )
{
   setTime( hr, min, sec );
} // end Time constructor

bool Time::setTime( int h, int m, int s )
{
   bool hourValid = setHour( h ); // invokes function setHour
   bool minuteValid = setMinute( m ); // invokes function setMinute
   bool secondValid = setSecond( s ); // invokes function setSecond
   return hourValid && minuteValid && secondValid;
} // end function setTime

bool Time::setHour( int hr )
{
   if ( hr >= 0 && hr < 24 )
   {
      hour = hr;
      return true; // hour is valid
   } // end if
   else
   {
      hour = 0;
      return false; // hour is invalid
   } // end else
} // end function setHour

bool Time::setMinute( int min )
{
   if ( min >= 0 && min < 60 )
   {
      minute = min;
      return true; // minute is valid
   } // end if
   else
   {
      minute = 0;
      return false; // minute is invalid
   } // end else
} // end function setMinute

bool Time::setSecond( int sec )
{
   if ( sec >= 0 && sec < 60 )
   {
      second = sec;
      return true; // second is valid
   } // end if
   else
   {
      second = 0;
      return false; // second is invalid
   } // end else
} // end function setSecond

// return hour value
int Time::getHour()
{
   return hour;
} // end function getHour

// return minute value
int Time::getMinute()
{
   return minute;
} // end function getMinute

// return second value
int Time::getSecond()
{
   return second;
} // end function getSecond

void Time::printUniversal()
{
   cout << ( hour < 10 ? "0" : "" ) << hour << ':'
      << ( minute < 10 ? "0" : "" ) << minute << ':'
      << ( second < 10 ? "0" : "" ) << second;
} // end function printUniversal

void Time::printStandard()
{
   cout << ( ( hour % 12 == 0 ) ? 12 : hour % 12 ) << ':'
      << ( minute < 10 ? "0": "" ) << minute << ':'
      << ( second < 10 ? "0": "" ) << second
      << ( hour < 12 ? " AM" : " PM" );
}
