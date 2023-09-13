#include<iostream>
using namespace std;
class employee
{
    int id;
    static int count;
    public:
    void getdata();
    void display();
    static void getcount();
};
void employee::getdata()
{
    cout<<"ENTER EMPLOYEE ID "<<endl;
    cin>>id;
    count++;
}
void employee::display()
{
    cout<<"EMPLOYEE ID IS"<<id<<endl;
}
 void employee::getcount()
{
    cout<<"THE VALUE OF COUNT IS "<<count<<endl;
}
 int employee::count;
int main()
{
    employee e,e1,e2;
    e.getdata();
    e.display();
    employee::getcount();
    e1.getdata();
    e1.display();
    e2.getdata();
    e2.display();
    return 0;    
}