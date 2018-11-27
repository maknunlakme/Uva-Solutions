#include<iostream>
using namespace std;
int main()
{
    int participant,budget,hotel,week,cost,temp,i,j;
    int price[20],bed[20][15];
    while(cin>>participant&&cin>>budget&&cin>>hotel&&cin>>week)
    {
        cost = budget+100;
        for(i=0;i<hotel;i++)
        {
            cin>>price[i];
            for(j=0;j<week;j++)
            {
                cin>>bed[i][j];
            }
        }
        for(i=0;i<hotel;i++)
        {
            for(j=0;j<week;j++)
            {
                if(participant<=bed[i][j])
                {
                    temp = participant*price[i];
                    if(temp<cost)
                    {
                        cost = temp;
                    }
                }
            }
        }
        if(cost<=budget)
        {
            cout<<cost<<endl;
        }
        else
        {
            cout<<"stay home"<<endl;
        }
    }
}
