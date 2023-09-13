#include<iostream>
using namespace std;

/*
int checkpower(int n)
{
   if(n==0)
   cout<<"no"<<endl;
   while(n!=1)
   {
    if(n%2!=0)//beech mein agr odd agaya toh ,power o 2 nhi h 
    return false;
    n=n/2;
   }
   return true;
}*/
//brian kerningam algo
int check(int n)
{
    if(n==0)
    return false;

    return ((n&(n-1)==0));//return tru if the condition is true else false...
}

int main()
{
    int number;
    cout<<"number :"<<endl;
    cin>>number;
//int a=checkpower(number);
int b=check(number);
cout<<b<<endl;
    
    return 0;
}