#include<iostream>
#include<cmath>
using namespace std;
class marks
{
    public:
    int roll_number;
    char *name;//arry of names OR string
    int *marks;//array of marks
    int num_marks;//number of marks
    void generateMarks(int num)
    {
        num_marks=num;
        marks=new int[num];
        for(int i=0;i<num;i++)
        {
            marks[i]=rand()%5+1;
        }
    }
    int sumofmarks()
    {
        int sum=0;
        for(int i=0;i<num_marks;i++)
        {
            sum+=marks[i];

        }
        return sum;
    }
    double average()
    {
        return round(((double)sumofmarks()/num_marks)*100)/100;
    }
    void setmarks(int number_of_marks,int newmarks)
    {
        marks[number_of_marks]=newmarks;
    }
    int getmarks()
    {
        return marks[number_of_marks];
    }
    void set_num_marks(int num)
    {
        num_marks=num;
        delete[]marks;
        marks=new int[num];
    }
    ~Marks()
    {
        delete[]marks;
    }
    
};
class physics:public Marks
{
    public:
};
class chemistry:public Marks
{

};
class maths:public marks{
    public:
};
int main()
{
    int num;
    cout<<"number of students"<<endl;
    cin>>num;
    Physics *cl1_phys=new Physics[num];//array of students with marks in phys
    Chemistry *cl1_chem=new chemistry[num];
    Mathematic *cl1_math=new Mathematic[num];
    for(int i=0;i<num;i++)
    {
        cl1_phys[i].rollnumber=cl1_chem[i].rollnumber=cl1_math.rollnumber=i+1;
        cl1_phys[i].generateMarks(9);
        cl1_chem[i].generateMarks(5);
        cl1_math[i].generateMarks(2);
    }
    //sum of marks
    for(int i=0;i<num;i++)
    {
        cout<<"Roll number of student is"<<cl1_phys[i].rollnumber<<endl;
        cout<<"total marks in phys"<<cl1_phys[i].sumofmarks()<<endl;
        cout<<"totalmarks in chem"<<cl1_chem[i].sumofmarks()<<endl;
        cout<<"total marks in maths"<<cl1_math[i].sumofmarks()<<endl;

    }

    /*same type of code for average marks also,just call the average()function*/
    return 0;
}