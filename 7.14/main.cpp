#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int y=0;
    vector<int>x(1);

    for(int i=0;i<=19;i++)
    {
        int prep=1;
        cin>>y;
        if(y<=100&&y>=10)
        {
            for(int q=0;q<=19;q++)
            {
                if(y==x[q])
                    prep=0;
            }
        }
        else
            prep=0;

        if(prep==1)
        {
            x[i]=y;
        }

    }
    for(int i=0;i<=19;i++)
    {
        cout<<"the result is"<<x[i]<<endl;
    }

}
