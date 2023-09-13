#include<iostream>
using namespace std;
class sum;
class complex
{
    int a,b;
    friend class sum;
    public:
    complex();//default constructor 
    void display()
    {
        cout<<a<<"+i "<<b<<endl;
    }
};
class sum
{
    public:
  int add(complex,complex);
  void printsum(complex,complex);
  
};
complex::complex()
{
    cout<<"enter the real part"<<endl;
    cin>>a;
    cout<<"enter the imaginary part"<<endl;
    cin>>b;
}
int sum::add(complex x,complex y)
{
  
  return ((x.a+y.a),(x.b+y.b));
}
void sum::printsum(complex w,complex e)
{
    cout<<"the sum is "<<w.a<<"+i"<<
}
int main()
{
    complex c;
    c.display();
    complex c1;
    c1.display();
    sum s;
    s.add(c,c1);
    s.printsum();
    
     return 0;
}