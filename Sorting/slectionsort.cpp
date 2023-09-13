#include<iostream>
#include<vector>
using namespace std ; 

void selectionsort(vector<int> &arr, int n)
{
    for(int i = 0 ; i< n-1 ; i++)//loop for every round
    {
        int minIndex = i;//considering 0 the least element


        for(int j =i+1;j<n;j++)// loop for swaping the minimum element between the arrays
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main()
{
    vector<int> arr ;
    arr = {1,7,9,2,3,0};
    int n = 5;
    selectionsort(arr,n);
    for( int i = 0 ; i < n ; i++ )
    {
       cout<<arr[i]<<" ";
    }
    

    return 0 ;


}