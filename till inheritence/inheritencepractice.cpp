#include<iostream>
#include<string>
using namespace std;
/*
Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale

class Mammal
{
    public:
    void printmammal()
    {
        cout<<"I AM A MAMMAL"<<endl;

    }
};
class MarineAnimal
{
    public:
    void printmarine()
    {
    cout<<"I AM A MARINE ANIMAL"<<endl;
    }
};
class BlueWhale:public Mammal,public MarineAnimal
{
    public:
    void printbluewhale()
    {
        printmammal();
        printmarine();
        cout<<"I BELONG TO BOTH CATEGORIES"<<endl;
    }
};
int main()
{
    Mammal whale;
    whale.printmammal();
    MarineAnimal fish;
    fish.printmarine();
    BlueWhale animal;
    animal.printbluewhale();
    return 0;
}
*/
/*
QUESTION 2
class apples
{
    protected:
    int number_apples;
    public:
    int countapples=0;
    void setapples()
    {
        cout<<"Enter how many apples you wanna put in the basket"<<endl;
        cin>>number_apples;
    }
    void applecounter()
    {
        for(int i=1;i<number_apples;i++)
        {
            countapples++;
        }
        cout<<"NUMBER OF APPLES IN THE BASKET ARE"<<countapples<<endl;
    }
};
class mangoes
{
    protected:
    int number_mangoes;
    public:
    void setmango()
    {
        cout<<"Enter how many mangoes you wann enter in the basket"<<endl;
        cin>>number_mangoes;
    }
    int countmangoes=0;
    void mangocounter()
    {
        for(int j=1;j<number_mangoes;j++)
        {
            countmangoes++;
        }
        cout<<"NUMBER OF MANGOES IN THE BASKET ARE"<<countmangoes<<endl;
    }
};
class fruits:public apples,public mangoes
{
    private:
    int number_fruits=0;
    public:
    void countfruit()
    {
        applecounter();
        mangocounter();
        number_fruits=number_apples+number_mangoes;
        cout<<"NUMBER OF FRUITS IN THE BASKET ARE"<<number_fruits<<endl;

    }
};
int main()
{
    apples a;
    a.setapples();
    mangoes m;
    m.setmango();
    fruits f;
    f.countfruit();
    return 0;
}
*/
class marks
{
    protected:
    int roll_number;
    string name;
    int marks_in_phys;
    int marks_in_chem;
    int marks_in_maths;
    int totalmarks=0;
    int average;
    public:
    void getdata_of_student()
    {
        cout<<"ENTER THE DETAILS OF THE STUDENT"<<endl;
        cin>>roll_number>>name;
    }
    void getmarks_of_student()
    {
        cout<<"ENTER THE MARKS IN EACH SUBJECT"<<endl;
        cin>>marks_in_chem>>marks_in_maths>>marks_in_phys;
    }
    void calculatetotalmarks()
    {
        totalmarks=marks_in_chem + marks_in_maths + marks_in_phys;
    }
    void calcavg()
    {
        average=totalmarks/3;
    }
    void display()
    {
        cout<<"roll number of the student is"<<roll_number<<endl;
        cout<<"name is "<<name<<endl;
        cout<<"THE TOTAL NUMBER OF MARKS OBTAINED BY THE STUDENT IS"<<totalmarks<<endl;
        cout<<"AVERAGE OBTAINED BY THE STUDENT IS "<<average<<endl;
     }
};
class maths:public marks
{
    public:
    void showmaths()
    {
        cout<<"the marks in mathematics is "<<marks_in_maths<<endl;
    }
};
class phys:public marks
{
    public:
    void showphys()
    {
        cout<<"marks in phys is "<<marks_in_phys<<endl;
    }
};
class chem:public marks
{
    public:
    void showchem()
    {
        cout<<"marks in chemistry is "<<marks_in_chem<<endl;
    }
};
int main()
{
    marks student1;
    student1.getdata_of_student();
    student1.getmarks_of_student();
    student1.calculatetotalmarks();
    student1.calcavg();
    chem c;
    maths m;
    phys p;
    p.showphys();
    m.showmaths();
    c.showchem();
    student1.display(); 
    return 0;
}

