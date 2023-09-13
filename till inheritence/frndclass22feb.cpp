#include<iostream>
using namespace std;
class number2;
class number1
{
    int number;
    public:
    void setnumber(int value)
    {
        number=value;
    }
    friend void addthem(number1,number2);
};
class number2
{
    int data;
    public:
    void setdata(int value2)
    {
        data=value2;
    }
    friend void addthem(number1,number2);
};
void addthem(number1 x,number2 y)
{
    cout<<"sum of the numbers are "<<x.number+y.data<<endl;
}
int main()
{
    number1 a;
    a.setnumber(10);
    number2 b;
    b.setdata(20);

    addthem(a,b);
    return 0;

}