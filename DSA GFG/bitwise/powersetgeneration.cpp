#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void genpower(string str)
{
    int n = str.length();
    int power = pow(2, n);
    for (int counter = 0; counter < power; counter++)
    {
        for (int i = 0; i < n; i++)
        {

            if (((counter & (1 << i)) != 0))
                cout << str[i];
        }
    }
    cout << endl;
}

int main()
{
    string str;
    cout << "enter a string" << endl;
    cin >> str;
    genpower(str);
    return 0;
}
