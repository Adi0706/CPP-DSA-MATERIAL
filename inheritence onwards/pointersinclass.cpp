#include<iostream>
using namespace std;
/*

int main()
{
    //to dynamically allocate a new memory
    int *p=new int(50);
    cout<<"the value of p is "<<*p<<endl;
    int *arr=new int[3];
    arr[0]=1;
    arr[1]=2;//can also be written as *(arr+1)
    arr[2]=3;//can also be written as *(arr+2)
    cout<<"the value of array are"<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
    delete p;
    delete []arr;
    cout<<"the value of p is "<<*p<<endl;
    cout<<"the value of array are"<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
    return 0;
}
*/
/*
We could also initialise thier values like that-

int *arr=new int[3]{2,4,8};
cout<<arr[0];

output -
2
*/
//POINTER TO OBJECT using new and delete//
class complex
{
    int real,imaginary;
    public:
    complex(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    void printdata()
    {
        cout<<"value of real is "<<real<<endl;
        cout<<"value of imaginary part is "<<imaginary<<endl;
    }
};
int main()
{
    complex c(1,4);
    complex *ptr=new complex(4,5);
    complex *p=&c;
    c.printdata();
    (*ptr).printdata();
    (*p).printdata();
    return 0; 
}
