#include<iostream>
using namespace std;
class father
{
    protected:
    int x;
    public:
    void getx(int a)
    {
        x=a;
    }
};
class mom
{
    protected:
    int y;
    public:
    void gety(int b)
    {
        y=b;
    }
};
class son:public father,public mom
{
    public:
    void show()
    {
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<x+y<<endl;
    }
};
int main()
{
    son s;
    s.getx(100);
    s.gety(200);
    s.show();
    return 0;
}