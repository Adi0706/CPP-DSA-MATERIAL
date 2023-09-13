#include<iostream>
using namespace std;
class Complex;//forward declaration
class calculator
{public:
    int sum(Complex,Complex);
};
class Complex
{
    private:
    int a,b;
    friend int calculator::sum(Complex,Complex);//can also be written as friend class calculator;
    public:
    void setnumber(int n1,int n2)
    {
        a=n1;b=n2;

    }
    void printnumber()
    {
        cout<<"the complex number is "<<a<<" +i"<<b<<endl;
    }
};
int calculator::sum(Complex o1,Complex o2)
{
    return (o1.a+o2.a);
}
int main()
{
Complex c1,c2;
c1.setnumber(1,3);
c1.printnumber();
c2.setnumber(3,4);
c2.printnumber();
int res;
calculator r1;
res=r1.sum(c1,c2);
cout<<"THGE SUM OF REAL PARTS ARE "<<res<<endl;
return 0;

}