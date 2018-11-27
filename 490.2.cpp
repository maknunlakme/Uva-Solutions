#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    char line[110][110] = {'\0'};
    int i,j,Max,temp;
    i = 0;
    j = 0;
    Max = 0;
    char Temp[110];
    bool double_break;
    double_break = false;
    while(gets(Temp))
    {
        temp = strlen(Temp);
        for(j=0;j<temp;j++)
        {
            if(Temp[j]==9)
            {
                double_break = true;
                break;
            }
            line[i][j] = Temp[j];
        }
        i++;
        if(double_break==true)
        {
            break;
        }
    }
    cout<<line[0]<<endl;
    cout<<line[1]<<endl;
    for(j=0;j<i;j++)
    {
        temp = strlen(line[j]);
        cout<<"string length"<<j<<" = "<<temp<<endl;
        if(temp>Max)
        {
            Max = temp;
        }
    }
    cout<<"Max = "<<Max<<endl;
    cout<<"temp = "<<temp<<endl;
    temp = i-1;
    cout<<"temp-1 = "<<temp<<endl;
    for(j=0;j<Max;j++)
    {
        for(i=temp;i>=0;i--)
        {
            cout<<line[i][j]<<" i= "<<i<<" "<<" j= "<<j;
        }
        cout<<endl;
    }
    return 0;
}
