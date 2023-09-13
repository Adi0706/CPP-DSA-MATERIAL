#include<iostream>
using namespace std;
class base1
{
    int data1;
    public:
    base1(int i)
    {
        data1=i;

    }
    void printbase1()
    {
        cout<<"value of data 1 is"<<data1<<endl;
    }
};
class base2
{
    int data2;
    public:
    base2(int j)
    {
        data2=j;
    }
    void printbase2()
    {
        cout<<"value of data2 is "<<data2<<endl;
    }
};
class Derived:public base1,public base2
{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d):base1(a),base2(b)//constructor initialization similar to this
    {
        derived1=c;
        derived2=d;
    }
    void printderived()
    {
        cout<<"the values of derived class are"<<derived1<<endl<<derived2<<endl;
    }
};
int main()
{
    Derived d(7,8,9,10);
    d.printbase1();
    d.printbase2();
    d.printderived();
    return 0;
}