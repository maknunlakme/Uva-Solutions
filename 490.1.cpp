#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    char line[110][110];
    int i,j,Max,temp;
    i = 0;
    j = 0;
    Max = 0;
    char Temp[110];
    while(gets(Temp))
    {
        strcpy(line[i], Temp);
        i++;
    }
    for(j=0;j<i;j++)
    {
        temp = strlen(line[j]);
        if(temp>Max)
        {
            Max = temp;
        }
    }
    temp = i-1;
    for(j=0;j<Max;j++)
    {
        for(i=temp;i>=0;i--)
        {
            cout<<line[i][j];
        }
        cout<<endl;
    }
    return 0;
}
