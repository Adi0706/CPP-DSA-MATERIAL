#include<iostream>
using namespace std;
void printtriangle(int);
int main()
{
    int roll[7]={2,0,0,4,0,0,1};
    int a[3];
    for(int i=4;i<7;i++)
    {
        if(roll[i]==0)
        {
            a[i]=roll[i]=5;
        }
        
    cout<<"your new points are"<<a[i];
    printtriangle(a[i]);
    }
    return 0;

}
void printtriangle(int n[3])
{
for(int i=1;i<=7;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
}