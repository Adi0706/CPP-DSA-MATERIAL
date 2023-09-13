#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    return 0;
    int a=n%10;
    return a+sum(n/10);
}

int main()
{
    int number;
    cout<<"number :"<<endl;
    cin>>number;
    int b=sum(number);
    cout<<b<<endl;
    

    return 0;
}