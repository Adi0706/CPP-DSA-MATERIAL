#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class Derived : public base
{
    int data3;

public:
    void process();
    void display1();
};
void Derived::process()
{
    data3 = data2 + getdata1();
}
void Derived ::display1()
{
    cout << getdata1() << endl;
    cout << data2 << endl;
    cout << data3 << endl;
}
int main()
{
    Derived d;
    d.setdata();
    d.process();
    d.display1();
    return 0;
}
// FOR PRIVATELY INHERITED

/*#include <iostream>
using namespace std;
class base
{
   int data1;
   public:
   int data2;
   void setdata();
   int getdata1();
   int getdata2();
};
void base::setdata()
{
   data1=10;
   data2=20;
}
int base::getdata1()
{
   return data1;
}
int base::getdata2()
{
   return data2;
}

class Derived : private base
{
   int data3;
   public:
   void process();
   void display1();
};
void Derived::process()
{
   setdata();
   data3=data2+getdata1();
}
void Derived :: display1()
{
   cout<<getdata1()<<endl;
   cout<<data2<<endl;
   cout<<data3<<endl;
}
int main()
{
   Derived d;
   d.process();
   d.display1();
   return 0;
}
*/