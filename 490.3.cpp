#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    char line[101][101] = {'\0'};
    int i,j,Max,temp;
    i = 0;
    j = 0;
    Max = 0;
    char Temp[101];
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
            if(line[i][j]=='\0')
            {
                line[i][j]=32;
            }
            cout<<line[i][j];
        }
        cout<<endl;
    }
    return 0;
}
