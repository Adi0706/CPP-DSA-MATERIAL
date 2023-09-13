#include<iostream>
using namespace std;
class number;
class data1
{
    int data;
    public:
    void setdata(int dat)
    {
        data=dat;
    }
    void print()
    {
        cout<<"YOUR NNUMBER IS "<<data<<endl;
    }
    friend void swap(data1 &,number &);
};
class number
{
    int num;
    public:
    void setnumber(int numb)
    {
        num=numb;
    }
    void display()
    {
        cout<<"YOUR NUMBER IS  "<<num<<endl;
    }
    friend void swap(data1 &,number &);
};
void swap(data1 &d1,number &n1)//& reference is used to avoid the copy of data here data d1 will make a copy of the object
{
    int temp;
    temp=d1.data;
    d1.data=n1.num;
    n1.num=temp;
    
}
int main()
{
    data1 a;
    a.setdata(10);
    a.print();

    number n;
    n.setnumber(20);
    n.display();

    swap(a,n);
    cout<<"AFTER SWAPING THE NUMBERS ARE : "<<endl;
    a.print();
    n.display();
    return 0;

}
