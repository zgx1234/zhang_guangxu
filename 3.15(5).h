
#include "date.h"
int main()
{
  int x=0,y=0,z=0;
  cout<<"please enter month ";
  cin>>x;
  if(x>=1&&x<=12)
    x=x;
  else
    x=1;
  cout<<"please enter day ";
  cin>>y;
  cout<<"please enter year";
  cin>>z;
  Date date(x,y,z);
  date.displayDate();
    return 0;
}
