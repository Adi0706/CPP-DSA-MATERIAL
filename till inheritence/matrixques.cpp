#include<iostream>
using namespace std;
const int rows=3;
const int coloumns=3;
class matrix
{
    int mat[rows][coloumns];
    public:
    void setdata();
    void sumofmatrix(matrix x1);
    void printdata();
};
void matrix::setdata()
{
    int n=3;
    cout<<"enter your matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
        cout<<endl;
    }
}
void matrix::sumofmatrix(matrix x1)
{
  for(int i=0;i<rows;i++)
  {
      for(int j=0;j<coloumns;j++)
      {
         mat[i][j]=mat[i][j]+x1.mat[i][j];
      }
  }
  
}
//void matrix::printdata()
//{
    //cout<<"your matrix is "<<mat[rows][coloumns];
//}
int main()
{
    matrix mat1,mat2;
    mat1.setdata();
    //mat1.printdata();

cout<<"the sum of matrix is"<<endl;
    mat2.sumofmatrix(mat1);
    return 0;

}