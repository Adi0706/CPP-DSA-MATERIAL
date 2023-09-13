#include <iostream>
using namespace std;
int count=0;
class number
{
    public:
    number()
    {
        count++;
        cout<<"the constructor is called"<<endl;

    }
    ~number()
    {
        cout<<"the destructor is called"<<endl;
        count--;
    }
};
int main()
{
    cout<<"entering the main program"<<endl;
    cout<<"creating a block"<<endl;
    number n1
    {
        cout<<"entering the block"<<endl;
        cout<<"creating 2 objects"<<endl;
        number n2,n3;
        cout<<"exiting from the block"<<endl;
    }
    cout<<"back to main program"<<endl;
    return 0;

}