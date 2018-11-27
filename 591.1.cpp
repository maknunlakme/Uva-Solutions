#include<iostream>
using namespace std;
int main()
{
    int number,i,total,moves,count_set;
    int heights[110];
    count_set = 0;
    while(1)
    {
        moves = 0;
        total = 0;
        cin>>number;
        if(number==0)
        {
            break;
        }
        for(i=0;i<number;i++)
        {
            cin>>heights[i];
        }
        for(i=0;i<number;i++)
        {
            total += heights[i];
        }
        total /= number;
        for(i=0;i<number;i++)
        {
            if(heights[i]>total)
            {
                moves += (heights[i] - total);
            }
        }
        count_set++;
        cout<<"Set #"<<count_set<<endl;
        cout<<"The minimum number of moves is "<<moves<<"."<<endl;
        cout<<endl;
    }
    return 0;
}
