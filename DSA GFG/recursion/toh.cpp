//TOWER OF HANOI
#include<iostream>
using namespace std;
//NOTE***--> a,b,c are the towers in wich we re moving the discs 
//NOTE***-->the places of tower a b c will change accordingly with the ques ,in the recursive function...
void TOH(int n,char a,char b,char c)
{
    if(n==1)//if the number of disc is only 1 then move it from a to c
    {
        cout<<"move 1 from  "<<a<<"  to "<<c<<endl;
        return ;
    }
    TOH(n-1,a,c,b);//using recursion move the disc from a to b ,c is auxiliary tower
     cout<<"move "<<n<<"from  "<<a<<"  to "<<c<<endl;
     TOH(n-1,b,a,c);//move the disc from b to c,a auxiliary tower
}
int main()
{
    int number_of_discs;
    cout<<"enter the number of discs you wanna transfer "<<endl;
    cin>>number_of_discs;

    
    TOH(number_of_discs,'a','b','c');
    return 0;

}
/*
 long long toh(int N, int from, int to, int aux) {
        if(N>0){
            toh(N-1,from,aux,to);
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            toh(N-1,aux,to,from);
        }
        return pow(2,N)-1;//returns number of moves

    }
    //change the auxilary and to variable accordingly
    //doesnt matter if its a,b,c etc...
   */