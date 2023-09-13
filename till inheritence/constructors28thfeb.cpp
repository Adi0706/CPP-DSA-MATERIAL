#include<iostream>
#include<cmath>
using namespace std;
class point 
{
    private:
    int x,y;
    
    public:
    point(int,int);
    void display()
    {
        cout<<"your points are"<<"("<<x<<","<<y<<")"<<endl;
    }
    friend void dist(point obj1,point obj2);
    
};
point::point(int a,int b)
{
    x=a;
    y=b;
}
void dist(point obj1,point obj2)
{
    long res;
res=sqrt(((obj1.x)-(obj2.x)*(obj1.x)-(obj2.x))+((obj1.y)-(obj2.y)*(obj1.y)-(obj2.y)));
cout<<"distance is "<<res<<endl;
}
int main()
{
    int result;
    point p(1,1);//implicit call
    p.display();
    point p1=point(1,1);//explicit call
    p1.display();
    dist(p,p1);
    
    return 0;
}