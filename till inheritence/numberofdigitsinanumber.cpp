#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"ENTER A NUMBER"<<endl;
    cin>>number;
    int numberofdigits=1;
    //number/10 --> jitni baar divide hoga usse pata chalega ki kitne digits hai
    while(number=number/10)
    {
        numberofdigits++;
    }
    cout<<"THE NUMBER HAS "<<numberofdigits<<" DIGITS"<<endl;
    return 0;
}