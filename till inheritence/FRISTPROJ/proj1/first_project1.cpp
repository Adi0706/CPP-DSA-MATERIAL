#include <iostream>
#include <string.h>
void showhelp();

using namespace std;

int main(int argc,char *argv[])//argv to store the sequence of charactrers in array
{
for(int i=0;i<argc;i++)
{
    if(strcmp(argv[i],"-h"))
    {

        showhelp();
    }
}
return 0;
}
void showhelp()
{
    cout<<"this is a sex corner,hahahahaha welcome:PPPPPPPPPPPPP"<<endl;

}
