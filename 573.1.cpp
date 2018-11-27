#include<iostream>
using namespace std;
int main()
{
    float well_height,day_distance,night_distance,fatigue,count_day,distance,i,temp;
    while(1)
    {
        distance = 0;
        count_day = 0;
        cin>>well_height;
        cin>>day_distance;
        cin>>night_distance;
        cin>>fatigue;
        if(well_height==0)
        {
            break;
        }
        for(i=0;distance>=0&&distance<=well_height;i++)
        {
            count_day++;
            temp = (day_distance - (((fatigue/100)*day_distance)*(count_day-1)));
            if(temp>0)
            {
                distance += temp;
            }
            //cout<<"day distance : "<<distance<<endl;
            if(distance<0||distance>well_height)
            {
                break;
            }
            distance -= night_distance;
            //cout<<"night distance : "<<distance<<endl;

            //cout<<"day : "<<count_day<<endl;
        }
        if(distance>=well_height)
        {
            cout<<"success on day "<<count_day<<endl;
        }
        else if(distance<0)
        {
            cout<<"failure on day "<<count_day<<endl;
        }
    }
}
