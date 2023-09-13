#include<iostream>
using namespace std;
int main()
{
    int array[3][3];
   int  value=1;
    for(int i=1;i<=3;i++)
    {
        cout<<endl;
        for(int j=1;j<=3;j++)
        {
            array[i][j]=value;
            value++;
            
            cout.width(5);
            cout<<array[i][j]<<" ";
        }
    }
    return 0;
}