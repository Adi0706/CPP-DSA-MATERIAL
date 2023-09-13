#include<iostream>
using namespace std;
void lottery(int,int);
int main()
{
    lottery(50,10);
    return 0;
}
void lottery(int total_balls,int balls_to_draw)
{
if(total_balls<balls_to_draw)
return;//here return will not allow any further code to be executed as our return type is void.
srand(time(NULL));//Seed is created
int *balls= new int[balls_to_draw];//dynamic allocation for variable ball
for(int i=0;i<balls_to_draw;i++)
{
    balls[i]=rand()%total_balls+1;//this will generate random between 0 to 48
    cout<<balls[i]<<endl;
    delete[]balls;
    //to check if the balls_to_draw are repeating or not 
    for(int j=0;j<i+1;j++)
    {
        if(balls[i]==balls[j]&& i!=j)
        {
            i--;
            break;
        }
        else if(j==i)
        {
        cout<<balls[i]<<endl;
        }
    }

}
}
