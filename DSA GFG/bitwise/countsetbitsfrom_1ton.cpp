 #include<iostream>
 using namespace std;
 int countSetBits(int n)
    {
    n++;//to ignore all the zeros as all the bits are unset
    int count=0;
    //for counting the bits from 1 to n...
    for(int x=2;x/2<n;x=x*2)//if the tabulate from 1 to n the pairs of 0s and 1s appear in 2 power n
    //where n is the number 1s or 0s in the pair...
    
    //here we are doing x=x*2 cuz the value of pairs is increasing with 1,4,8,16...
    {
        int quotient=n/x;//this gives complete count of pairs of 1s
        count=count+quotient*x/2;//this gives the complete count of 1s in the current bit
        
        int remainder=n%x;//checking the last digits
        if(remainder>x/2)
        {
            count=count+remainder-x/2;//if the count pair is odd we add the remaining pair of 1s.
        }
        
        
    }
    return count;
    }
 int main()
 {
     int number=0;
     cin>>number;
     int a=countSetBits(number);
     cout<<a;
     return 0;
 }
 