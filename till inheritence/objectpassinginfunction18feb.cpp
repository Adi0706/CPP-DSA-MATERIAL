#include<iostream>
using namespace std;
class Complex
{
    private:
    int a;
    int b;
    public:
    void setdata(int,int);
    void setdatabysum(Complex c1,Complex c2);
    void printdata();

};
void Complex::setdata(int v1,int v2)
{
    a=v1;
    b=v2;
}
void Complex::setdatabysum(Complex c1,Complex c2)
{
a=c1.a+c2.a;
b=c2.b+c2.b;
}
void Complex::printdata()
{
    cout<<"your complex numeber is "<<a<<" +i"<<b<<endl;
}
int main()
{
    Complex n1,n2,n3;
    n1.setdata(2,4);
    n1.printdata();

    n2.setdata(1,6);
    n2.printdata();

    n3.setdatabysum(n1,n2);
    return 0;
}