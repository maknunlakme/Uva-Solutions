#include<iostream>
using namespace std;
int main()
{
    int test,i,j;
    cin>>test;
    unsigned int employee[3];
    unsigned int  maxi,mini;
    unsigned int survived[25];
    maxi = 0;
    mini = 100000;
    j=0;
    while(test!=0)
    {
        for(i=0;i<3;i++)
        {
            cin>>employee[i];
        }
        for(i=0;i<3;i++)
        {
            if(maxi<employee[i])
            {
                maxi = employee[i];
            }
        }
        for(i=0;i<3;i++)
        {
            if(mini>employee[i])
            {
                mini = employee[i];
            }
        }
        for(i=0;i<3;i++)
        {
            if(maxi==employee[i])
            {
                employee[i]=0;
            }
        }
        for(i=0;i<3;i++)
        {
            if(mini==employee[i])
            {
                employee[i]=0;
                mini=100000;
            }
        }
        for(i=0;i<3;i++)
        {
            if(employee[i]!=0)
            {
                survived[j]= employee[i];
                maxi=0;
            }
        }
        test--;
        j++;
    }
    for(i=0;i<j;i++)
    {
        cout<<"Case "<<i+1<<": "<<survived[i]<<endl;
    }
    return 0;
}
