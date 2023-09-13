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

    
}


int main()
{
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    facto(number);
  
    

    return 0;
}

/*
int recurfunc(int x)
{
    if(x==0)
    {
        return 1;
    }
    else 
{
    while(x!=0)
    {
    return x*recurfunc(x-1);//har baar 1 peeche ka func call ho jara h
    }

}
}
int main()
{
    int number;
    cout<<"number ?"<<endl;
    cin>>number;
  int a=recurfunc(number);
  cout<<a;
  return 0;

}*/