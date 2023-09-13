//leetcode-easy
#include<iostream>
#include<vector>
using namespace std ;
 int maximumCount(vector<int>& nums) {
     
        int s = 0, e = nums.size()-1,mid,ans1= 0,ans2 = 0;
        while(s<=e){
            mid = (e-s)/2+s;
            if(nums[mid]<0){
                ans1 = mid+1;
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        s = 0, e = nums.size()-1;
        while(s<=e){
            mid = (e-s)/2+s;
            if(nums[mid]>0){
                ans2 = nums.size()-mid;
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        return max(ans1,ans2);
    }
    int main ()
    {
        vector<int> nums = {-2,-1,-1,1,2,3} ; 

        cout<<maximumCount(nums);
        return 0 ; 
    }