#include<iostream>
#include<string>
using namespace std;
void fun(string str,string current="",int i=0)
{
   if(i==str.length())
   {
      cout<<" "<<endl;
      return;
   }
   fun(str,current,i+1);
   fun(str,current+str[i],i+1);

   
}
int main()
{
   string s="abc";
   fun(s,"",0);
   return 0;
}