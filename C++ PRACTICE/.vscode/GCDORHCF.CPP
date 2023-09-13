#include<iostream>
using namespace std;
/*
int gcd(int x,int y)
{
    int result=min(x,y);//finds the mimum of 2 numbers
    while(result>0)//jab tk result 0 se bada hai...
    {
        if(x%result==0&&y%result==0)//tab tk check krro ki hamare numbers result se divide hore h ya nhi 
        {
            break;//agr hore hai toh loop band krdo aur nikal jao,hame milgye divisor
        }
        result--;//agr nhi hore divide toh ek number peeche check krro 
    }
    return result;// result bata do loop se break krke 
}

int main()
{
    int n1,n2;
    cout<<"enter 2 numbers :"<<endl;
    cin>>n1;
    cin>>n2;
    int res=gcd(n1,n2);
    cout<<"gcd is :"<<res<<endl;
    return 0;
}
*/
//EUCLIDEAN ALGORITHM
/*whille(a!=b)
{
    if(a>b)
    {
        a=a-b;
    }
    else 
    b=b-a;
}
return a ;
}
*/
/*
int recursion(int a,int b)
{
    if (b==0)
    return a;
    else 
    return gcd(b,a%b);

}
*/