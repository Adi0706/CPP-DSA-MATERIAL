#include<iostream>
#include<string>
using namespace std;
class library
{
    private:
    string author;
    string publication;
    int year;
    public:
    void addbook()
    {
        cout<<"ENTER THE AUTHOR OF THE BOOK"<<endl;
        cin>>author;
        cout<<"ENTER THE PUBLICATION OF THE BOOK"<<endl;
        cin>>publication;
        cout<<"ENTER THE YEAR OF PUBLICATION"<<endl;
        cin>>year;
    }
    void getbook()
    {
        cout<<"AUTHOR OF THE BOOK IS "<<author<<endl;
        cout<<"PUBLICATION OF THE BOOK IS"<<publication<<endl;
        cout<<"YEAR OF THE PUBLICATION IS "<<year<<endl;
    }

    
};
int main()
{
    library book_type[5];
    for(int i=0;i<5;i++)
    {
        book_type[i].addbook();
    }
    cout<<"BOOKS IN THE LIBRARY ARE : "<<endl;
    for(int i=0;i<5;i++)
    {
        book_type[i].getbook();
    }
    return 0;
}