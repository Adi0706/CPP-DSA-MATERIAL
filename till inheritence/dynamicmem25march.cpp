/*
#include<iostream>
using namespace std;
int main()
{ 
    int amount;
    cout<<"enter the number of digits you wanna enter"<<endl;
    cin>>amount;
    int *p= new int [amount];
    for(int i=0;i<amount;i++)
    {
        cout<<"enter"<<i+1<<"number  "<<endl;
      cin>>p[i];
    }
    for(int j=0;j<amount;j++)
    {
        cout<<"number"<<j+1<<"is  "<<p[j]<<endl;
        
    }
    return 0;
}
*/
/*
//use of new and delete
#include<iostream>
using namespace std;
int main()
{
    int *p= new int;
    cout<<"enter a value";
    cin>>*p;
    cout<<p<<endl<<*p;
    delete p;
    cout<<*p; 
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a ;
    int *p=&a;
    cout<<"enter tha value of the given integer"<<endl;
    cin>>a;
    cout<<"The vlaue of interger is "<<a<<endl;
    cout<<"the address of integer is "<<p<<endl;
    int *q= new int;
    cout<<"enter the value of new integer"<<endl;
    cin>>*q;
    cout<<"the value of integer is "<<*q<<endl;
    cout<<"the address of integer is "<<q<<endl;
    delete q;
    return 0;
}*/
/*
#include<iostream>
using namespace std ;
int main()
{
    int size;
    cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
    cin>>size;
    int *p=new int [size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter"<<i+1<<"value"<<endl;
        cin>>*(p+i);
    }   
    for(int j=0;j<size;j++)
    {
        cout<<"the values are"<<*(p+i)<<endl;
        
    }
    return 0;
}
*/