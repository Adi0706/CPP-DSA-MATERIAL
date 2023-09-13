#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream out;
    out.open("samplefile.txt");
    out<<"hello bhai";
    out<<"hello bhai also";
    out.close();
    
    ifstream in;
    string st;
    /*string s1,s2;
    in.open("samplefile.txt");
    in>>s1>>s2;
    cout<<s1<<"\t"<<s2;
    in.close();*/
    in.open("samplefile.txt");
    while(in.eof()==0)//jab tk end of file zero ke bara bar hai ,tabtak mujhe read krwate raho 
    {
        getline(in,st);
        cout<<st<<endl;
    }




    return 0;

}