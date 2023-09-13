//arraya of objects//

#include<iostream>
using namespace std;
class shop
{
int id;
float price;
public:
void setdata(int a,int b)
{
  id=a;
  price=b;  
}
void getdata()
{
    cout<<"the id is "<<id<<endl;
    cout<<"the price is"<<price<<endl;
}
};
int main()
{
    shop *s=new shop[3];//array of objects
    shop *stemp=s;//to store the first position of the array for next loop
    int p,q;

    for (int i = 0; i <3 ; i++)
    {
        cout<<"enter the id and price od item :"<<i+1;
        cin>>p>>q;
       s->setdata(p,q); 
       s++;
    }
for (int j = 0; j<3; j++)
{
    cout<<"item number :"<<j+1<<endl;
    stemp->getdata();
    stemp++;


}

    return 0;
}