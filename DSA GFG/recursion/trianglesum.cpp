#include<iostream>
using namespace std;

void sumarr(int arr[],int n)
{
    if(n<1)//if size of array is -ve
    {
     return ;
    }

    int temp[n-1];//temprary variable to store sum of i and i+1
    for(int i=0;i<=n;i++)
    {
        int x=arr[i]+arr[i+1];//sum of i and i+1
        temp[i]=x;
    }
    sumarr(temp,n-1);

    for(int i=0;i<n;i++)
    {
        if(i==n-1)//to print the first line as array itself
        {
            cout<<arr[i]<<" ";
        }
        else
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    sumarr(arr,n);
    return 0;
}