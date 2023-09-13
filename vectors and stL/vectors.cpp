#include <iostream>
#include <vector>
using namespace std;
int main()
{
   // vector <int> v1 {10, 20, 30}; // 0 size vector,blank vector...
   // vector <string> v {"Aditya", "Bhattacharjee"};
  //  vector <char> v2 (5);      // size of vector 5...
   // vector <char> v3 (4, 'a'); // 4 as in the vector...


   // cout<<v[0]<<" "<<endl;
   // cout<<v[1]<<" "<<endl; 

    vector<int> v1;

   // cout<<v1.capacity()<<endl;
   // v1.push_back(10);//insert value at the end...
    //cout<<v1.capacity()<<endl;
   // v1.pop_back();
   // cout<<v1.capacity()<<endl;//does not change the capacity
   // cout<<v1.size()<<endl;//gives current number of elements in the vector

    v1.push_back(10);
    v1.push_back(20);
    //cout<<v1.capacity()<<endl;
    //v1.clear();
    // cout<<v1.capacity()<<endl;
     //cout<<v1.size()<<endl;
    // cout<<"value at index 1 is :"<<v1.at(1)<<endl;


     //use of iterator
        vector<int>:: iterator it=v1.begin(); 
        v1.insert(it+1,35);
        cout<<v1.size()<<endl; 
  
    return 0;
}//

