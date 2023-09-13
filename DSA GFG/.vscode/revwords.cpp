#include <bits/stdc++.h> 
using namespace std; 

void reverse(char str[],int low, int high){
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}

void reverseWords(char str[],int n){
    int start=0;
    for(int end=0;end<n;end++){
        if(str[end]==' '){//space means we have reached the end of the word.
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1);//reverses the last word
    reverse(str,0,n-1);//reverse the whole string to get the out put
}
 
int main() 
{ 
    string s = "Welcome to Gfg";int n=s.length();char str[n];
    strcpy(str, s.c_str());
    cout<<"After reversing words in the string:"<<endl;
    reverseWords(str,n);
    for (int i = 0; i < n; i++) 
        cout << str[i];
    
    return 0; 
} 