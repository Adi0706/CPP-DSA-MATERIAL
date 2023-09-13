#include<iostream>
using namespace std;
void subsets(string s,string current=" ",int i=0)
{
    if(i==s.length())//here we are inlcuding " " of the set hence we are not doing s.length()-1
    {
        cout<<current;
        return;
    }
    subsets(s,current,i+1);//for empty string " "
    subsets(s,current+s[i],i+1);//for first character in the string "A"
    //it will make a recursive tree...
}
int main()
{
    string s="abc";
    subsets(s,"",0);
    return 0;
}