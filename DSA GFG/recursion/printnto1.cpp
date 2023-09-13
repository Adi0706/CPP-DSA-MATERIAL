#include<iostream>
using namespace std;
void printcto1(int n)
{
    if(n==0)
    return ;
    cout<<n<<" ";
    printcto1(n-1);
}

int main()
{
    int x;
    cout<<" x: "<<endl;
    cin>>x;
    printcto1(x);
    
    return 0;
}