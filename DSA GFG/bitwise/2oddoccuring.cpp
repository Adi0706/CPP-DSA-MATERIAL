#include<iostream>
using namespace std;
void oddappearing(int arr[],int n)
{
    int x=0;
    int res1=0;
    int res2=0;
    for(int i=0;i<n;i++)
    {
        x=x^arr[i];
    }
    int ln=x&(~(x-1));
    for(int i=0;i<n;i++)
    {
        if((arr[i]&ln)!=0)
        {
            res1=res1^arr[i];
        }
        else
        {
            res2=res2^arr[i];
        }
    }
    cout<<res1<<res2<<endl;
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"enter in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    oddappearing(arr,n);
    return 0;
}