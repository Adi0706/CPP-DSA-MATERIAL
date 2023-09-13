#include<iostream>
using namespace std;
void takeval(book&);
void printval(book&);
struct book
{
    string author;
    string title;
    int year_publication;
};
int main()
{
    book b1,b2,b3;
    takeval(b1);
    takeval(b2);
    takeval(b3);
    printval(b1);
    printval(b2);
    printval(b3);
    
    return 0;
}
void takeval(book &bookval)
{
    cout<<"ENTER THE AUTHOR OF THE BOOK"<<endl;
    cin>>bookval.author;
    cout<<"ENTER THE TITLE OF THE BOOK"<<endl;
    cin>>bookval.title;
    cout<<"ENTER THE YEAR OF PUBLICATION"<<endl;
    cin>>bookval.year_publication;
}
void printval(book &bookval)
{
    cout<<"THE FOLLOWING ARE THE DETAILS OF THE BOOK--->"<<bookval.author<<endl<<bookval.title<<endl<<bookval.year_publication<<endl;

} 