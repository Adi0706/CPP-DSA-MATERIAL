#include<iostream>
using namespace std;


bool isPrime(int x){
    for(int i = 2;i*i <=;i++){
        if(x%i==0) {
       return false ; 
        }
    }
    return true ; 

}

int getLargestPrime(int nums[][]){
    int row = nums.length();
    int col = nums[0].length() ; 

// for 1st diagonal
    int i = 0 ; 
    int j = 0 ; 

    int maxprime = INT_MIN ; 
    //for primary diagonal
    while(i<row && j<col){
        int p = nums[i++][j++];
        if(isPrime(p)){
            maxprime = max(maxprime,p);
        }
    }


    //for second diagonal
    i = row-1 ; 
    j=0;

    while(i > = 0 && j < col){
        int p = nums[i--][j++];
        if(isPrime(p)){
            maxprime=max(maxprime,p);
        }
    }
}

int main()
{
    int nums[4][4] ; 
    int res = getLargestPrime(nums) ; 
return 0;
}
/*#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;  // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;  // If divisible by any number, not prime
        }
    }
    return true;
}

// Function to find the maximum prime along the main diagonal and
// the diagonal where row index + column index = 3
int maxDiagonalPrime(vector<vector<int>>& visited) {
    int max1 = 0, max2 = 0;

    // Finding maximum prime along the main diagonal
    for (int i = 0; i < visited.size(); i++) {
        if (isPrime(visited[i][i])) {
            max1 = max(max1, visited[i][i]);
        }
    }

    // Finding maximum prime along diagonal where i + j = 3
    for (int i = 0; i < visited.size(); i++) {
        for (int j = 0; j < visited[0].size(); j++) {
            if (i + j == 3 && isPrime(visited[i][i])) {
                max2 = max(max2, visited[i][j]);
            }
        }
    }

    // Return the maximum of the two found maximums
    return max(max1, max2);
}
*/