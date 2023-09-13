/*
#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
complex(int,int);
void getcomplex()
{
cout<<"your complex number is "<<a<<" i+"<<b<<endl;
}
};
complex::complex(int x,int y)//parameterized constructor takes 2  argument/parameter
{
    a=x;
    b=y;
}
int main()
{
    complex c(3,5);//implicit form
    complex a=complex(4,8);//explicit form
    c.getcomplex();
    return 0;
}
*/
#include<iostream>
#include<math.h>
using namespace std;
class point
{
    private:
    int a, b;
    public:
    point(int,int);
    getpoint()
    {
        cout<<"your points are"<<"("<<a<<","<<b<<")"<<endl;
    }
     int calcudist(point,point);
};
point::point(int x,int y)
{
    a=x;
    b=y;
}
int point::calcudist(point p1,point p2)
{
int ans= sqrt((p1.x*p2.x)-(p1.y*p2.y));
return ans;
}
int main()
{
point p1(5,6);
point p2(6,5);
point p3;
int res=p3.calcudist(p1,p2);
cout<<"the distance is "<<res<<endl;
return 0;
}









