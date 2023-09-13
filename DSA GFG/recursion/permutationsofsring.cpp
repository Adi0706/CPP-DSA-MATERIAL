#include<iostream>
#include<string>
//fix every character at the first position and gernate all permutations begining from that characters.
using namespace std;
void permute(string s,int i=0)
{
    if(i==s.length()-1)
    {
        cout<<s<<""<<endl;
        return ;
    }
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        permute(s,i+1);
        swap(s[i],s[j]);
    }
}
int main()
{
    string s={"ABC"};
    permute(s,0);
    return 0;
}