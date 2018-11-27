#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int party,day;
        int hortal=0;
        int days[4000]={0};
        cin>>day>>party;
        for(int i=1;i<=(day+7);i++)
        {
            if(i%7==0)
            {
                days[i]=-1000;
                days[i-1]=-1000;
            }
        }
        while(party--)
        {
            int temp;
            cin>>temp;
            for(int i=1;i*temp<=day;i++)
            {
                days[i*temp]++;
            }
        }
        for(int i=1;i<=day;i++)
        {
            if(days[i]>0)
            {
                hortal++;

            }
        }
        cout<<hortal<<endl;
    }
    return 0;
}
