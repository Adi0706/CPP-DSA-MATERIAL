#include<iostream>
using namespace std;
int josephus(int n,int k)
{
    if(n==1)
        return 1;
        
        return (josephus(n-1,k)+k-1)%n+1;
}

int main()
{
    int number_of_person;
    int k;

    cout<<"enter the number of ppl in the circle"<<endl;
    cin>>number_of_person;
    cout<<"enter wich person to kill"<<endl;
    cin>>k;

    int position=josephus(number_of_person,k);
    cout<<"position of the survivor is :"<<position<<endl;
    
    return 0;
}