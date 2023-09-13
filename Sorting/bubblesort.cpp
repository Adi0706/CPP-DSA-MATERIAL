#include<iostream>
#include<vector>
using namespace std ; 

void bubblesort(vector<int> &arr, int n)
{
    bool swapped = false ;
    for(int i= 1 ; i<n;i++)
    {
        for(int j = 0 ; j<n-i;j++)//size of array decreases with every round as the largest of the array gets sorted in each round in each round
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true ;
            }
        }
        if(swapped==false)
        {
            break ; 
        }
    }
}
int main()
{
    
    vector<int> arr ;
    arr = {1,7,9,2,3,0};
    int n = 5;
    bubblesort(arr,n);
    for( int i = 0 ; i < n ; i++ )
    {
       cout<<arr[i]<<" ";
    }
    return 0 ;
}

