#include<iostream>
using namespace std ;

int firstoccurence(int arr[],int n,int key)
{
   int s =0 ,  e= n-1;
   int mid = s+(e-s)/2;
   int ans = -1 ;

   while(s<=e)
   {
    if(arr[mid]==key)
    {
        ans = mid ;
        e = mid-1;
    }
    if(key>arr[mid])
    {
          s=mid+1;
    }
    if(key<arr[mid])
    {
      e = mid-1;
    }
     int mid = s+(e-s)/2;
   }
   return ans ;
}
int lastoccurence(int arr[],int n,int key)
{
   int s =0 ,  e= n-1;
   int mid = s+(e-s)/2;
   int ans = -1 ;

   while(s<=e)
   {
    if(arr[mid]==key)
    {
        ans = mid ;
        s = mid+1;
    }
    if(key>arr[mid])
    {
          s=mid+1;
    }
    if(key<arr[mid])
    {
      e = mid-1;
    }
     int mid = s+(e-s)/2;
   }
   return ans ;
}
int main()
{
    int even[5]={1,2,3,3,5};

    cout<<"the first and last occurence of key is at index"<<firstoccurence(even,5,3)<<lastoccurence(even,5,3)<<endl;

    return 0 ;
}