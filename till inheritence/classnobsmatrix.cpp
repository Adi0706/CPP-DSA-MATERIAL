#include<iostream>
using namespace std;
const int rows =50;
const int coloumns=50;
class matrix
{
    private :
    int mat[rows][coloumns];
    public:
    void input();
    void display();
    void operator+(matrix x);
    void operator*(matrix x);
}; 
void matrix::input()
{
    cout<<"Enter your matrix"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<coloumns;j++)
        {
          cin>>mat[i][j];
        }
    }
}
void matrix::display()
{
    cout<<"your matrix is :"<<endl;
     for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
          cout<<mat[i][j];
        }
        cout<<endl;
    }
    
}
void matrix::operator+(matrix x)
{
int arr[r1][r1];//to store the sum
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<r1;j++)
        {
            arr[i][j]=arr[i][j]+x.mat[i][j];
        }

    }
}
int main()
{
    int r1=3;
    matrix m1,m2;
    m1.input();
    m2.input();
    m1.display();
    m2.display();
    m1.operator+();
    m2.operator+();
cout<<"sum is "<<m1+m2;
return 0;
    
    
}