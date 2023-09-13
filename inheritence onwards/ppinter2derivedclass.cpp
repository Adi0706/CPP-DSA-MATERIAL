#include<iostream>
using namespace std ;
class base
{
    public:
    int var_base;
   virtual void display()
    {
        cout<<"displaying base class variable"<<var_base<<endl;
    }
};
class Derived:public base{
    public:
    int derived_var=500;
    void display()
    {
        cout<<"DISPLAYING DERIVED VARIABLE"<<derived_var<<endl;
    }
};
int main()
{
    base *b_pointer;
    base b;
    Derived d;

    b_pointer=&d;
    b_pointer->var_base=100;
    b_pointer->display();

 


    return 0;
}
