#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    //following is the procedure to show constructor overloading
    complex()
    {
        a=0;
        b=0;
    }
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    complex(int x)
    {
        a=x
        b=0;
    }
    //add a printfunc()
};
int main()
{
    complex c1;
    
}