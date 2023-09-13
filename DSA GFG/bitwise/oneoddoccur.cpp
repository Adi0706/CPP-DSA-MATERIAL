#include<iostream>
using namespace std;
/*

int main()
{
    //check the first element of the array and comparing with every element if it occurs odd time then print...
    int arr[7]={4,3,4,4,4,5,5};
    for(int i=0;i<7;i++)
    {
        int count=0;
        for(int j=0;j<7;j++)
        {
            if(arr[i]==arr[j])
            count++;
            
        }
        if(count%2!=0)
            cout<<arr[i];
    }

    return 0;
}
*/
/*
int find(int arr[])
{
    int res=0;
    for(int i=0;i<7;i++)
    {
    int res=res^arr[i];//sare elements ka xor nikal dere hai toh jo bache ga woh ans
}
}
*/
int main()
{
    int res=0;
    int arr[10]={1,2,3,4,5,6,7,8,9,};
    for(int i=0;i<10;i++)//find the xor of all elements in the array
    {
        res=res^arr[i];
        
    }
    int res2=0;
    for(int i=1;i<=10;i++)//find the xor of all numbers from 1 to n+1...
    {
           res2=res2^i;
    }
    int res3=0;
    for(int j=0;j<10;j++)//find the xor of 1 to n+1 and array elements 
    {
          res3=res2^res;
    }
    cout<<res3;
   
    return 0;
}