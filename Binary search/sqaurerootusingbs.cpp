//leetcode-easy
#include<iostream>
using namespace std ;
//let us assume that the square root of the given number lies between 0 to n
//so 0 to n becomes a monotonic function and we can apply binary function on it 
long long int  binarysearch(int n)
{
    int s = 0 , e = n ;
    long long int  mid = s +(e-s)/2 ;
    int ans = -1 ;


    while(s<=e)
    {
        long long int square = mid * mid ; 

        if(square == n) return mid ;//if square of mid = to our given number then its the answer

        if(square < n) // if the square root lies in the left hand side of midd , it may or maynot be the ans 
        {
            ans = mid ;
            s = mid + 1 ;// since the right part of the mid will anyway be smaller than the given number we ll put start to mid + 1 
        }
        else 
        {
            e = mid-1 ;
        }
        mid = s +(e-s)/2 ;

    }
    return ans ;
}
    int mySqrt(int x) {
        return binarysearch(x);
        
        
    }

int main()
{

    int x = 25 ;
   cout<< "square root of the number is : "<<binarysearch(x) ;
    return 0 ; 

}