#include<iostream>
using namespace std;
void remove(char *s)
{
    if(s[0]=='\0') return ;//base condition

    if(s[0]==s[1])//checking for adjacent characters
    {
        int i=0;
        while(s[i]!='\0')
        {
            s[i]=s[i+1];
            i++;
        }
        remove(s);
    }
    else 
    remove(s+1);
   
  

}
int main()
{
    char s[]="aabb";
    remove(s);
    cout<<s<<endl;

    return 0;
}