#include<iostream>
#include<string>
using namespace std;

const int CHAR=256;//global declaration

bool checkanagram(string s1,string s2)
{
    if(s1.length()!=s2.length())//if their length is not same 
    //they wont be in the permutation of the original string.
    return false;

     //counting frequencies method
    int count[CHAR]={0};
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++)
    {
        if(count[i]!=0)
        return false;
        else
        return true;
    }
}

int main()
{
    string s1,s2;
    s1="aabca";
    s2="acaba";
    cout<<checkanagram(s1,s2);
    
    return 0;
}