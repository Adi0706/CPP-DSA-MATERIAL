#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
    string sen="aur bhai kya haal hai";
    ofstream write("samplefile.txt");
    write<<"HAAN BHAI" +sen;//for adding an extra  string 
    ifstream read("samplefile.txt");
    getline(read,sen);
    cout<<sen;
    
    return 0;
}