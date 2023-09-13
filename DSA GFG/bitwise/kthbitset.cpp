#include<iostream>
using namespace std;
//using leftshit
/*void check(int number,int k)
{
    if(number&(1<<(k-1))!=0)//here we are assuming a number whose kth bit is set and anding it with our given number to find  out the result
    cout<<"yes"<<endl;
    else
    cout<<"no";
}*/
//using right shift
void check(int number,int k)
{
if(1&(number>>(k-1))==1)
cout<<"yes";
else
cout<<"no";
}
int main()
{
    int n,set;

    cout<<"number:"<<endl;
    cin>>n;
    cout<<"which bit"<<endl;
    cin>>set;

    check(n,set);


    return 0;
}
/* here the logic is :
ham check krre h ki hamara jo number h uska last bit and 1 ka last bit same hai ki nhi 
so for left shift ham n ko 1 se compare krwa rahe hai left shift krke
and for right shift ham ,1 ko n se compare krwa rahe h right shift krke
*/