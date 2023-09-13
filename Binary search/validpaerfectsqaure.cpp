//leetcode-easy
#include<iostream>
using namespace std ;
bool isPerfectSquare(int num) {
        // Binary Search
        int s = 1 , e =num;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            long long int sq = mid*mid; 
            //if the mid is the square root
            if(sq == num)return true;
            // to find the number in the monotonic arrat
             if(sq < num) 
             {
                s = mid+1;
             }

            else{
                e =mid-1;
            }
        }
        return false;
        
    }
    int main ()
    {
        int num = 16 ;
        cout << isPerfectSquare(num);
        return 0 ;
    }