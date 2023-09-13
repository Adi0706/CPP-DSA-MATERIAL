#include<iostream>
using namespace std ; 
int pivot_element(int arr[],int n)
{
    int s = 0 ;
    int e = n-1 ;
    int mid = s+(e-s)/2;
while(s<e)
{
    if(arr[mid]>=arr[0])
    {
        s = mid+1 ;
    }
    else 
    {
        e = mid;
    }
    mid = s+(e-s)/2;
}
return s ;
}
int binarysearch(int arr[],int s,int e , int key)
{
    int start = s;
    int end = e;
    int mid_element = (start + end)/2;
    
    while(start<=end)
    {
        if(arr[mid_element]==key)
        {
            return mid_element;
        }
        if(key>arr[mid_element])
        { 
            start = mid_element+1;
        }
        else
        {
            end = mid_element-1;
        }
        mid_element = (start+end)/2;
    }

return -1 ;
}
int searchrs(int arr[],int n,int k)
{
    int pivot = pivot_element(arr,n);
    if(k>=arr[pivot]&&k<=arr[n-1])
    {
        //binarysearch on second line
        return binarysearch(arr,pivot,n-1,k);
    }
    else
    //binary search on firstline
    {
         return binarysearch(arr,0,pivot-1,k);

    }
}

int main()
{
    int arr[5]={7,8,1,3,5};
    int n = 5 ;
    int k = 1;

    cout<<searchrs(arr,n,k);
    return 0 ;

}