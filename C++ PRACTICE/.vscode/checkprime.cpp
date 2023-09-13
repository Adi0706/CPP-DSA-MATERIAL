#include<iostream>
#include<cmath>
using namespace std;
/*
bool checkprime(int n)
{
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        return false;
        else
        return 1;
    }
}*/
//FOR LARGE NUMBERS
bool checkprime(int n)
{
    if(n==1)
    return false;
    if(n==2||n==3)
    return true;
    for(int i=5;i*i<n;i=i+6)//can also be written as i<sqrt(n)--> time complexity O(sqrt(n))
    {
        if(n%i==0||n%(i+2)==0)
        return false;
        else
        return true;
    }
}
    


int main()
{
    int number;
    cout<<"enter the number :"<<endl;
    cin>>number;
    checkprime(number);
    int a =checkprime(number);
    cout<<a;
    
    return 0;
}