#include<iostream>
using namespace std;
//base class
class employee
{
    int id;
    float salary;
    public:
    employee(int inpid)
    {
        id=inpid;
        salary=5000;
    }
    employee(){}
    void display()
    {
        cout<<id<<endl<<salary<<endl;
    }

};
//derived class
class programmer:public employee//here employee calls the defalut constructor from the base class therefore we should always declare a default constructor in base class 
{
    private:
    int languagecode=9;
    int id1;
    public:
    programmer(int inid)
    {
        id1=inid;
    }
    void display2()
    {
        cout<<id<<endl<<languagecode<<endl;
    }
};
int main()
{
    employee aditya(1),teshu(2);
    aditya.display();
    teshu.display();
    programmer p(1);
    p.display2();
    cout<<p.id1<<endl;
    return 0;

}
/* visibility modes--->
if you derive a class privately, the public members of the base class will go to the private of the derived class
if you derive a class publicaly,the public memvbers of the base class will go to the public of the derived class
default visibility mode is private
private members are never inherited
*/