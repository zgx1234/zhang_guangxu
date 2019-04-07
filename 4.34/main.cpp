#include <iostream>

using namespace std;

int main()
{
   int n=0;
   int N=1;
   cout <<"Enter a nonnegative integer ";
       cin>>n;
   if((n==1)||(n==0))
    cout <<"½×³Ë N=1";
   else
   {


   while(n>=2)
   {

       N=N*n;
       n=n-1;





   }

   cout<<"N="<<N;
   }
   return 0;
}
