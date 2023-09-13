#include<iostream>
using namespace std;
/*template <class T>
class vector
{
    public:
    T *arr;
    int size;//only use T for those datatypes ,which can be customised 
    vector(int m)
    {
        size=m;
        arr=new T [size];
    }
    T d=0;
    T dotproduct(vector &v)
    {
        for (int i = 0; i < size; i++)
        {
            d=d+this->arr[i]*v.arr[i];
        }
        return d;
        
    }
};
int main()
{
    vector<float> v1(3);
    v1.arr[0]=4.2;
    v1.arr[1]=2.9;
    v1.arr[2]=3;
    vector <float>v2(3);
    v2.arr[0]=3;
    v2.arr[1]=1.5;
    v2.arr[2]=3.9;
    float a=v1.dotproduct(v2);
    cout<<"DOT PRODUCT IS : "<<a<<endl;    
    return 0;
}*/
//class templates with multiple parameters
template<class T1,class T2,class T3>//jitne templates utne datatypes 
class myclass
{
    public:
    T1 data1;
    T2 data2;
    T3 data3;

    myclass(T1 a,T2 b,T3 c)
    {
        data1=a;
        data2=b;
        data3=c;
    }
    void printclass()
    {
        cout<<"the contents of the class are : "<<this->data1<<endl<<this->data2<<endl;
        cout<<"the third content is :"<<this->data3<<endl;
    }
};
int main()
{
    myclass<int,char,string>m1(54,'g',"this is how we write templates :)");
    m1.printclass();

    return 0;
}
//if we already specify the datatypes in the begining ,we call it default template
//int the main function we ll just <> the angular brackets empty
