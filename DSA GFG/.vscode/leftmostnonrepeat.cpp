#include<iostream>
#include<string>
#include<climits>
using namespace std;

const int CHAR=256;

int nonrep(string &str)
{
    int fI[CHAR];//creating an array which stores 
    //first index
    fill(fI,fI+CHAR,-1);
    //stores -1 for characters which are not 
    //repeating and stores -2 for characters which are repeating
    for(int i=0;i<str.length();i++)
    {
        if(fI[str[i]]==-1)
        fI[str[i]]=i;//the character is not repeating
        else
        fI[str[i]]==-2;//the character is repeating
    }
    int res=INT_MAX;
    for(int i=0;i<CHAR;i++)
    {
        if(fI[i]>0)
        res=min(res,fI[i]);
    }
    return (res==INT_MAX)?-1:res;

    }


int main()
{
    string str = "geeksforgeeks";
    cout<<"Index of leftmost non-repeating element:"<<endl;
    cout<<nonrep(str)<<endl;  
    
    return 0;
}