#include<iostream>
using namespace std;

void facto(int n)
{
    int result=1;
    for(int i=2;i<=n;i++)
    {
        result=result*i;//here we are multiplying numbers from 1 to n
    }
    cout<<"factorial is :"<<result<<endl;
    int temp=result;
     int count=0;
    while (temp%10==0)//jab tk result ka last digit 0...
    {
        count++;//tab tk count ++ krte raho
        temp=temp/10;//aur number ke baki digits bhi check krro 
        

    }
    cout<<"number of trailing zeros are "<<count<<endl;//jitne zeros detect hue utne batado mujhe
    
}


int main()
{
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    facto(number);
  
    

    return 0;
}