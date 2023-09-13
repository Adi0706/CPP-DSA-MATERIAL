#include<iostream>
#include<string>
using namespace std;

const int CHAR=256;

//returns the index at which the left most character 
//repeats in the whole string.
//"geeksforgeeks"---> here g is the left most character 
//repeating in the whole string.

//NAIVE APPROACH
/*
int leftmost(string &str)
{
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            return i;
        }
    }
    return -1;
}*/
//EFFICIENT-->COUNTING CHARCTERS METHOD
/*
int leftmost(string &str)
{
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++)
    {
        if(count[str[i]]>1)
        return i;
        else 
        return -1;
    }
}
*/
//EFFICIENT APPROACH-2
int leftmost(string &str)
{
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);

    int res=-1;
    for(int i=str.length()-1;i>=0;i--)//traversing from right
    {
        if(visited[str[i]])
        res=i;
        else
        visited[str[i]]=true;
    }
    return res;
}


int main()
{
    string s1="geeksforgeeks";
    cout<<leftmost(s1);

    return 0;
}

