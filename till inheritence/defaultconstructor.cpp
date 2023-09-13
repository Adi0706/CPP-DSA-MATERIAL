#include<iostream>
using namespace std;
class simple
{
    private:
    int data1,data2,data3;

    public:
    simple (int a,int b=9,int c)//dafault arguments 
    
    {
        data1=a;
        data2=b;
        data3=c;
    }
    void printnumber()
    {
        cout<<"datas are "<<data1<<endl<<data2<<data3<<endl;
    }
};
int main()
{
    simple s1(3,4);
    s1.printnumber();
    return 0;
}
