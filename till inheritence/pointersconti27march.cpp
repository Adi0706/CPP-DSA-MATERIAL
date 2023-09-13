#include<iostream>
using namespace std;
int multi(int *,int,int);
int main()
{
    int array[10];
    cout<<"enter into array"<<endl;
    for(int i=0;i<sizeof(array);i++)
    {
        array[i]=i;
    }
    multi(array,5,sizeof(array));
    return 0;
}
int multi(int *arr,int amount,int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        arr[i]=arr[i]*amount;
    }
}