#include<iostream>
using namespace std;
class student
{
    protected:
    int rollnumber;
    public:
    void set_roll_number(int);
    void get_rollnumber();
    
};
void student::set_roll_number(int r)
{
    rollnumber=r;
}
void student::get_rollnumber()
{
    cout<<"ROLL NUMBER IS  "<<rollnumber<<endl;
}
class exam:public student
{
    protected:
    float maths;
    float phys;
    public:
    void setmarks(float,float);
    void getmarks();
};
void exam::setmarks(float m,float p)
{
    maths=m;
    phys=p;
}
void exam::getmarks()
{
    cout<<"MARKS IN MATHS ARE "<<maths<<endl;
    cout<<"MARKS INP PHYS ARE "<<phys<<endl;
}
class result:public exam
{
    protected:
    float percenatge;
    public:
   
    void display()
    {
        get_rollnumber();
        getmarks();
        cout<<"PERCENTAGE OBTAINED IS "<<(maths+phys)/2<<"%"<<endl;
        
    }
    
};

int main()
{
    result Adi;
    Adi.set_roll_number(2004001);
    Adi.setmarks(97.6,78.0);
    Adi.display();
    return 0;
}