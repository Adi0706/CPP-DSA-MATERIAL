#include<iostream>
#include <string>
using namespace std;
class employee
{
    private:
    int age;
    char name[100];
    int id;
    public:
    void setdata();
    void getdata();

};
void employee::setdata()
{
cout<<"ENTER YOUR AGE"<<endl;
cin>>age;
cout<<"ENTER YOUR NAME"<<endl;
cin>>name;
cout<<"ENTER YOUR ID"<<endl;
cin>>id;
}
void employee ::getdata()
{
    cout<<"YOUR AGE IS "<<age<<endl;
    cout<<"YOUR NAME IS "<<name<<endl;
    cout<<"YOUR ID IS "<<id<<endl;
}
int main()
{
    employee e;
    e.setdata();
    e.getdata();
    return 0;
}