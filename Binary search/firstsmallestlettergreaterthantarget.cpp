//leetcode-easy
#include<iostream>
#include<vector>
using namespace std ; 
char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0 , end = letters.size()-1 ; 
        while(start<end)
        {
            int mid = start + (end-start)/2 ;
            if(letters[mid]>target)
            {
                end = mid ; 
            }
            else 
            {
                start = mid + 1 ;
            }
        }
        return letters[start] > target ? letters[start] : letters[0];
    }

int main()
{
    vector<char> letters = {'c','f','j'} ; 
    char target = 'a';

    cout<<nextGreatestLetter(letters,target);
    return 0 ;


}