//leetcode-easy---> IMPORTANT
#include<iostream>
using namespace std ;
 int arrangeCoins(int n) {
        long start = 0, end = n;
        long k, current;
       //k is complete row with coins

       while(start<=end){
        k = start + (end-start)/2 ;
        current = (k * (k+1))/2 ;

        if (current == n) return (int)k ;

        if(current>n)
        {
            end = k-1;
        }
        else
        {
            start = k+1;
        }
       }
       return (int) end ;
    }

int main()
{
 int number_of_coins = 5 ;
 cout<<"the number of completed rows : "<<arrangeCoins(number_of_coins);

return 0 ;
}