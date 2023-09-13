#include<iostream>
#include<vector>
using namespace std ;
 void insertionsort(vector<int>&arr,int n )
 {
  for(int i=1;i<n;i++)
  {
    int temp = arr[i];
    int j = i-1 ; 
   for ( ; j>=0;j --)
   {
        if(arr[j]>temp)
        {
          arr[j+1] = arr[j]; 
        }
         else
   {
    break ;
   }
   }
  
   arr[j+1]= temp ; 
 }
 }
   
 
  int main ( )
  {
    vector<int> arr ;
    arr = {1,7,9,2,3,0};
    int n = 5;
    insertionsort(arr,n);
    for( int i = 0 ; i < n ; i++ )
    {
       cout<<arr[i]<<" ";
    }
    return 0 ;
 
  }