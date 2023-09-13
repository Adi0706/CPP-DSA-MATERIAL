#include<iostream>
using namespace std;
//templates in fucntions...
template<class T>
void swapp(T &a,T &b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;

}

void func(int a)
{
    cout<<"display us"<<a<<endl;
}
template<class T>
void func( T a)
{
    cout<"display me "<<a<<endl;
}

int main()
{
    int x=5;
    int y=9;
   swapp(x,y);
   cout<<x<<" " <<y;
func(5);//exact match has the highest priority in function overloading

    return 0;
}