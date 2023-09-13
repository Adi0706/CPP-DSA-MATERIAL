/*
#include <iostream>
using namespace std;
int rope(int l, int a, int b, int c)
{
    if (l == 0)
        return 0;
    if (l <= -1)
        return -1;

    int sum = max(rope(l-a,a,b,c),max(rope(l-b,a,b,c),rope(l-c,a,b,c)));


    if (sum == -1)
        return -1;

    return sum + 1;
}
int main()
{
int length=21,a=7,b=16,c=19;

cout<<rope(length,a,b,c);


    return 0;
}
*/
