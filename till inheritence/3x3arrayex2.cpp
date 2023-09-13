#include<iostream>
using namespace std;
int main()
{
    char arr[3][3];
    char value='1';
    //printing the 1st 3X3 rray from the first question
    for(int i=0;i<3;i++)
    {
        cout<<endl;
        for(int j=0;j<3;j++)
        {
            arr[i][j]=value;
            value++;

            cout.width(5);
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
//player 1
int xcord,ycord;
cout<<"ENTER THE X COORDINATE "<<endl;
cin>>xcord;
cout<<"ENTER TH Y COORDINATE"<<endl;
cin>>ycord;
arr[xcord-1][ycord-1]='X';//putting n-1 cuz array size is 3 so rows and coloumns will go from 0,1,2 i.e 3-1 =2
for(int i=0;i<3;i++)
{
    cout<<endl;
    for(int j=0;j<3;j++)
    {
        cout.width(5);
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
//for player 2 with O
int xcord2,ycord2;
cout<<"enter the x coord"<<endl;
cin>>xcord2;
cout<<"enter the yccord"<<endl;
cin>>ycord2;
arr[xcord2-1][ycord-1]='O';
for(int i=0;i<3;i++)
{
    cout<<endl;
    for(int j=0;j<3;j++)
    {
        cout.width(5);
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

 return 0;
}
