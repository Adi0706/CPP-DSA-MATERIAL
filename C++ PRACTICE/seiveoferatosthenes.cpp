#include<iostream>
using namespace std;
#include<iostream>

using namespace std;
bool isprime(int n)
{
    if(n==1)
    return 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
        else
        return true;
    }
}
void seiveeratfunc(int x)
{
    for (int i = 2; i <x; i++)
    {
        if(isprime(i))
        cout<<i;
    }
    
}

int main()
{
    int number;
    cin>>number;
    isprime(number);
    seiveeratfunc(number);
    
    return 0;
}