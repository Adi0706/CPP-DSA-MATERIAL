#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"enter a number "<<endl;
    cin>>n;
    int temp=n;//using temp so that the original value of temp is retained 
    int rev=0;
    int a;
    while(temp!=0)
    {
        a=temp%10;//to remove the last digit

        rev=rev*10+a;

        temp=temp/10;//to remove the next digit
    }
    if(rev==n)
    {
        cout<<"palindrome number"<<endl;
    }
    else
    {
        cout<<"not a palindrome"<<endl;
    }


    return 0;
}
