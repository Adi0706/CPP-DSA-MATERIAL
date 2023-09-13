//leetcode-easy
#include<iostream>
#include<vector>
using namespace std ;
int findKthPositive(vector<int>& arr, int k) {
        int s = 0 , end = arr.size(), mid;
        while(s<end)
        {
            mid = s +(end-s)/2 ; 
            if(arr[mid]-1-mid<k)
            {
                s = mid +1;
            }
            else
            {
                end = mid ; 
            }

        }
        return s + k ;
        
    }
int main()
{
    vector<int> arr = {1,2,3,4};
    int k = 2 ;
    cout<<"the missing kth number in the array is : "<<findKthPositive(arr,k);

    return 0 ; 

}
