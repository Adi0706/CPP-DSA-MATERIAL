#include<iostream>
using namespace std;
class book;
class library
{
    
    public:
    void getbook(book);
    void dispbook(book)
    {
        cout<<"author is "<<author<<endl;
        cout<<"title"<<title<<endl;
        cout<<"year of publication"<<year_of_publication<<endl;
    }
};
class book
{
private:
friend class library;
string author;
string title;
int year_of_publication;
public:
void getdetails()
{
    cout<<"enter the author"<<endl;
    cin>>author;
    cout<<"enter the title"<<endl;
    cin>>title;
    cout<<"year of publication"<<endl;
    cin>>year_of_publication;
}
};
void library::getbook(book b)
{
    b.getdetails();
}
int main()
{
    book b1;
    library l;
    l.getbook(b1);
    l.dispbook(b1);
    return 0;
}