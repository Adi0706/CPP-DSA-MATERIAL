#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int y=12;
    //OR,AD,XOR
    cout<<(x&y)<<endl;
    cout<<(x|y)<<endl;
    cout<<(x^y)<<endl;
    
    //LEFT SHIFT OPERATOR
    int a=3;
    cout<<(a<<1)<<endl;
    cout<<(a<<2)<<endl;
    int b=4;
    cout<<(a<<b)<<endl;

    //RIGHT SHIFT OPERATOR
    int c=33;
    cout<<(c>>1)<<endl;
    cout<<(c>>2)<<endl;
    int d=4;
    cout<<(c>>d)<<endl;

// NOT OPERATOR 
unsigned int e=1;
cout<<(~e)<<endl;
e=5;
cout<<(~e)<<endl;




    return 0;
}