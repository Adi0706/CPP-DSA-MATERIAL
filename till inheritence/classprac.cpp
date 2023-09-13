#include<iostream>
using namespace std;
class complex
{
    private :
    int a,b;
    public :
    void setnumber(int n1,int n2);
    void display()
    {
        cout<<"your complex number is"<<a<<"+i" << b<<endl;
    }
};
complex sumcomplex(complex o1,complex o2)
{
    complex c3;
    c3.setnumber((o1.a+o2.a))
}
void complex::setnumber(int n1,int n2)
{
    a=n1;
    b=n2;
}
int main()
{
    complex c1,c2;
    c1.setnumber(3,7);
    c2.setnumber(4,5);
    c1.display();
    c2.display();
    return 0;
}