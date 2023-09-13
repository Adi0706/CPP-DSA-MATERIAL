#include<iostream>
using namespace std;
int countdigit(int number)
{
    int c=0;
    while(number!=0)
    {
        number=number/10;
        c++;
    }
    return c;
}
int main()
{
    int Your_number;
    cout<<"enter your number"<<endl;
    cin>>Your_number;

   int res=countdigit(Your_number);
   cout<<"number digits in the number are "<<res<<endl;

   return 0;


}