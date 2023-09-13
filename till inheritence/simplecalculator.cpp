//BASIC CALCULATOR USING INHERITENCE//
#include<iostream>
#include<cmath>
using namespace std;
class simpleCalculator
{
    protected:
    int num1,num2;
    public:
    void setnumer()
    {
        cout<<"ENTER 1ST NUMBER"<<endl;
        cin>>num1;
        cout<<"ENTER 2ND NUMBER"<<endl;
        cin>>num2;
    }
    void operations()
    {
        cout<<" A+B="<<num1+num2<<endl;
        cout<<"A-B="<<num1-num2<<endl;
        cout<<"A/B"<<num1/num2<<endl;
        cout<<"AxB="<<num1*num2<<endl;
    }
};

class scientificCalculator
{
    protected:
    int a,b;
    public:
    void setscinumber()
    {
        cout<<"ENTER THE 1ST NUMBER"<<endl;
        cin>>a;
        cout<<"ENTER THE 2ND NUMBER"<<endl;
        cin>>b;

}
public :
void scioperations()
{
    cout<<"SIN FUNCTION"<<sin(a)<<endl;
    cout<<"COS FUNCTION IS"<<cos(a)<<endl;
    cout<<"EXPONENTIAL IS"<<exp(a)<<endl;
    cout<<"TANGENT IS"<<tan(a)<<endl;
}
};
class hybridCalculator:public simpleCalculator,public scientificCalculator
{
    
};
void displaymenu()
{
    cout<<"       MENU      "<<endl;
    cout<<"1.SIMPLE-CALCULATOR "<<endl;
    cout<<"2.SCIENTIFIC-CALCULATOR"<<endl;
}

int main()
{
    displaymenu();
    hybridCalculator h1;
    char confirm;
    int choice;
    do 
    {
        cout<<"enter your choice(1-5)"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: h1.setnumer();break;
            case 2: h1.operations();break;
            case 3: h1.setscinumber();break;
            case 4: h1.scioperations();break;
            default : cout<<"INVALID OPTION"<<endl;break;
        }
        cout<<"DO YOU WISH TO CONTINUE"<<endl;
        cin>>confirm;
    }while(confirm=='y'||confirm=='Y');
    
    return 0;
}