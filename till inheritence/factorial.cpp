#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number you want to find th factorial of";
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
        cout<<i<<"!"<<":"<<factorial<<endl;
    }
    
    return 0;
}