#include<iostream>
using namespace std;
class Complex
{
private:
int a;
int b;
public:
void setdata(int c1,int c2)
{
    a=c1;
    b=c2;
}
friend Complex sumcomplex(Complex o1,Complex o2);
void printdata()
{
    cout<<"your complex number is "<<a<<" +i"<<b<<endl;
}
};
Complex sumcomplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    Complex n1,n2,sum;
    n1.setdata(7,9);
    n1.printdata();

    n2.setdata(3,7);
    n2.printdata();

    sum=sumcomplex(n1,n2);
    sum.printdata();

    return 0;

}