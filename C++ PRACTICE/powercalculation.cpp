#include<iostream>
using namespace std;
int power(int x,int n)
{
    int res=1;
    while(n>0)
    {
        if(n%2!=0)
        res=res*x;
        else
        x=x*x;
        n=n/2;
    }
    return res;
}

int main()
{
    int a,c;
    cin>>a>>c;
    int b=power(a,c);
    cout<<b;
    
    return 0;
}