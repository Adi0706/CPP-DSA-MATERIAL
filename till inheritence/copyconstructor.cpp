#include<iostream>
using namespace std;
class number
{
    private:
    int a ;
    public:
     
    number()
    {
        a=0;
    }
    number(number &obj)//if a copy constructor is not called then the compliler calls its own copy constructor
    {
        cout<<"copy ocnstructor is "<<endl;
        a=obj.a;
    }
    void display()
    {
        cout<<"then number is"<<a<<endl;
    }
};
int main()
{
    number x,y;
    x.display();
    y.display();

    return 0;

    
}
