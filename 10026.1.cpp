#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct ratioo
{
    int index;
    double cost;
};
int main()
{
    double a,b;
    int test,job,i,j;
    cin>>test;
    while(test--)
    {
        cin>>job;
        struct ratioo jobs[1200];
        for(i=0;i<job;i++)
        {
            cin>>a>>b;
            jobs[i].cost=b/a;
            jobs[i].index=i;
        }
        for(i=0;i<job-1;i++)
        {
            for(j=job-1;j>i;j--)
            {
                if(jobs[j].cost>jobs[j-1].cost)
                {
                    swap(jobs[j].cost,jobs[j-1].cost);
                    swap(jobs[j].index,jobs[j-1].index);
                }
            }
        }
        for(i=0;i<job-1;i++)
        {
            cout<<jobs[i].index+1<<" ";
        }
        cout<<jobs[i].index+1<<endl;
        if(test!=0)
        {
            cout<<endl;
        }
    }
    return 0;
}
