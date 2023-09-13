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
void primefactor(int x)
{
    for(int i=2;i<x;i++)
    if(isprime(i))
    {
        int a=i;
        while(x%a==0)
        {
            cout<<i<<endl;
            a=a*i;
        }
    }
}

int main()
{
    int number;
    cout<<"enter a number:"<<endl;
    cin>>number;
   int a= isprime(number);
   cout<<a;
   primefactor(number);
   
    
    return 0;
}