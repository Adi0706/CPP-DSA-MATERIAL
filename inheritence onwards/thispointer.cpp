#include<iostream>
using namespace std;
class A
{
    int a;
    public:
   A& setdata(int a)//becomes an object ,used to return an A object
    {
       //this will show garbage value--> a=a;
       this->a=a;//jismein value dalni h usmein this use krna h :)
       return *this;
    }
    void printdata()
    {
        cout<<"THE VALUE OF a IS : "<<a<<endl;
    }
};
int main()
{
    A a;
    a.setdata(7).printdata();
    a.printdata();
    return 0;
}
