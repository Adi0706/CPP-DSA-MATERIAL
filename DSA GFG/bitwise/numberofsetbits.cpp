#include<iostream>
using namespace std;
/*
void countbit(int n)
{
    int count=0;
   while(n!=0)
   {
    if(n&1==1)//check the last bit is set or not
    //if(n%2==0)
    //count++;
    count++;
    n=n>>1;//shifting by one to check the next bit,jo bit check hogaya usse leading zero banadere hai and last digit frise check hora h
    //n=n/2;
   }
   cout<<"no of set bits are :"<<count<<endl;
}*/
//BRIAN KERNINGANS ALGO
int countbits(int n)
{
    int res=0;
    while(n>0)
    {
        n=(n&(n-1));//jitne n mein set bits h utne baar loop chalega 
        res++;
    }
    return res;
}
int main()
{
    int number;
    cout<<"number:"<<endl;
    cin>>number;
   int a= countbits(number);
   cout<<a;
    
    return 0;
}

