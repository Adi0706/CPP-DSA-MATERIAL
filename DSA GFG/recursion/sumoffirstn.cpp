#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    return 0 ;
    sum(n-1);
    return n+sum(n-1);

   
    
    
    
    

}

int main()
{
    int x;
    cout<<"number :"<<endl;
    cin>>x;

   int a= sum(x);
   cout<<a;
    
    return 0;
}