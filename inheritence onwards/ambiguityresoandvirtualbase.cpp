#include<iostream>
using namespace std;
/*
class base
{
    public:
    void say()
    {
        cout<<"hello bhai"<<endl;
    }
};
class base2
{
    public:
    void say()
    {
        cout<<"hello maam"<<endl;

    }
};
class derived:public base,public base2
{
    public:
    void say()
    {
        base::say();//AMBIGUITY RESOLUTION 
    }
    
};
int main()
{
    base b;
    b.say();
    base2 b2;
    b2.say();
    derived d;
    d.say();
    return 0;
}
*/
//PROGRAM FOR VIRTUAL BASE CLASS//

class student
{
   protected:
   int roll_number;
   public:
   void set_rollnunmber(int roll)
   {
       roll_number=roll;
   } 
   void getroll_number()
   {
       cout<<"roll number is"<<roll_number<<endl;
   }
};
class Test:virtual public student
{
    protected:
    float maths,physics;
    public:
    void setmarks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
    void printmarks()
    {
        cout<<"marks in maths are"<<maths<<endl
             <<"marks in physics are "<<physics<<endl;
    }
};
class sports:virtual public student
{
    protected:
    int score;
    public:
    void setscore(int sc)
    {
        score=sc;
    }
    void getscore()
    {
        cout<<"your pt score is"<<score<<endl;
    }
};
class Result:public Test,public sports
{
    float total=0;
    public:

    void display()
    {
           total=maths+physics+score;
        getroll_number();
        printmarks();
        getscore();
        cout<<"total marks obtained is "<<total<<endl;
    }
};
int main()
{
    Result Aditya;
    Aditya.set_rollnunmber(001);
    Aditya.setmarks(98.8,89.5);
    Aditya.setscore(7);
    Aditya.display();
    return 0;
}
