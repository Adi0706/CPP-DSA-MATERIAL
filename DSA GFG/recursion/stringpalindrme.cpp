#include<iostream>
#include<string>
using namespace std;
//abba
//1 2 3 4 
//1 start , 4 end
//here start and end are the first and the last character of the array...
bool check(string str,int start,int end)
{
    if (start>=end)//if the string has only 1 element between start or the string is empty 
    return true;
    return ((str[start])==(str[end]))&&(check(str,start+1,end-1));//by recursion check the substring between start and end 
    //by each recursive call the start and end is shifted to the sub string...
    


}

int main()
{
    string s="abba";
   printf("%s", check(s, 0, s.length() -1) ? "true" : "false");//if true else false c command 
   return 0;
}