#include<iostream>
using namespace std;
//1234
//
int main()
{
    int arr[4];
    cout<<"enter numbers in array"<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    int zrr[4];
    for(int j=1;j<=4;j++)
    {
        
        zrr[j]=arr[4-j];
        cout<<zrr[j];

    }
    

    return 0;
}