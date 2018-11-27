#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int i,j,k;
    char temp;
    int jolly[30] = {0};
    int what[30] = {0};
    i=0;
    k=0;
    while(cin>>temp)
    {
        if(getchar()==13)
        {
            cout<<"hello 4"<<endl;
        }
        if(temp>47&&temp<58)
        {
            jolly[i] = temp-48;
            i++;
            cout<<"hello 1"<<endl;
        }
        else
        {
            cout<<"hello 3"<<endl;
            for(j=0;j<i;j++)
            {
                if(jolly[j]-jolly[j+1]<i)
                {
                    what[k] = 1;
                    cout<<"hello 2"<<endl;
                }
            }
            i=0;
            k++;
        }
    }
    /*for(i=0;i<30;i++)
    {
        temp=jolly[i];
    }*/
    for(i=0;i<k;i++)
    {
        if(what[i]==0)
        {
            cout<<"notjolly"<<endl;
        }
        else
        {
            cout<<"jolly"<<endl;
        }
    }
    return 0;
}
