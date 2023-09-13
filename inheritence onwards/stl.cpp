#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    vector<int>vec1;
    //vector<int>vec2(4);--> will print 4 only
    //vector<int>vec3(6,3);-->will print 6 elements of 3.
    int element;
    int size;
    cout<<"enter the size of the vector"<<endl;
cin>>size;
    for (int i = 0; i <size; i++)
    {
    cout<<"enter an element to add in this vector"<<endl;
    cin>>element;
    vec1.push_back(element);
    }
    //vec1.pop_back();
    display(vec1);
    //to initialize iterator
    vector<int>::iterator iter=vec1.begin();
    vec1.insert(iter+1,2,600);//iter+n to insert at anyposition you want
    //^here the 2 represents copy of 600,we can put asmany as we can
    display(vec1);
    
    return 0;
}