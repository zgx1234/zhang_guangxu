#include"account.h"
int main()
{
  int n=0,m=0,l=0;
  cout<<"请输入你的余额 ";
  cin>>n;
  cout<<"存款 ";
  cin>>m;
  cout<<"取款 ";
  cin>>l;
  if(l<=n)
    l=l;
    else
    l=0&&cout<<"Debit amount exceeded account balance.";
  Account account(n,m,l);
  account.displaymessage();
    return 0;
}
