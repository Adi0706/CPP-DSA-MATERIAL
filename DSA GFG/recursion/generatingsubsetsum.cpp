
//subset sum problem...
#include<iostream>
using namespace std;
int countsets(int arr[],int n,int sum)
{
    if(n==0)
    return (sum==0)?1:0;//if n==0 ,and sum==0 return 1 else return 0.
    return countsets(arr,n-1,sum)+countsets(arr,n-1,sum-arr[n-1]);//first one is where we dont include the items and the sum remains same
    //second recursive call is where we do include the items and the sum is subtracted from the items...
}
int main()
{
    int n=3;
    int arr[]={10,20,15};
    int sum=25;

    cout<<countsets(arr,n,sum);
    return 0;
}