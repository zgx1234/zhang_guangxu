#include <iostream>
#include <array>
using namespace std;
const size_t rows =3;
const size_t columns =5;
int main()
{
    array<array<int,columns>,rows>sales={0};
    for(size_t row =0;row <sales.size();++row)
    for(size_t column =0;column<sales[row].size();++column)
    sales[row][column]=0;
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=4;j++)
            cout<<sales[i][j];
    }

}
