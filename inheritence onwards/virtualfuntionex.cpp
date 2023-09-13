#include<iostream>
#include<cstring>
using namespace std;
class CWH
{
    protected :
    string title ;
    float rating;
    public:
    CWH(string t,float r)
    {
      title=t;
      rating =r;
    }
    virtual void display(){}//if we dont put virtual ,then by default we ll get this dipaly only
};
class video:public CWH
{
    int video_length;
    public:
    video(string t,float r,int vl):CWH(t,r)
    {
        video_length=vl;
    }
    void display()
    {
        cout<<title<<endl;
        cout<<rating<<endl;
        cout<<video_length<<endl;

    }
};
class text:public CWH
{
    int pages;
    public:
    text(string t,float r,int vl,int p):CWH(t,r)
    {
        pages=p;
    }
    void display()
    {
        cout<<title<<endl;
        cout<<rating<<endl;
        cout<<pages<<endl;
    }
};
int main()
{
   string title;
    float rating,vlen;
    int pages;
    title="cpp";
    rating=4.5;
    vlen=5.5;
    pages=30;
    video cpp(title,rating,vlen);
    cpp.display();
    text cppt(title,rating,vlen,pages);
    cppt.display();

CWH *tuts[2];
tuts[0]=&cpp;
tuts[1]=&cppt;

tuts[0]->display();
tuts[1]->display();


    return 0;
}