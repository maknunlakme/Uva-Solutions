#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,Max,Void;
    unsigned N;
    k = 0;
    char surface[12][25];
    while(cin>>N)
    {
        fflush(stdin);
        int count_X[12] = {0};
        Max =0;
        Void = 0;
        if(N==0||N<=0||N>=13)
        {
            break;
        }
        for(i=0;i<N;i++)
        {
            gets(surface[i]);
            for(j=0;j<25;j++)
            {
                if(surface[i][j]=='X')
                {
                    count_X[i] ++;
                }
                surface[i][j] = '\0';
            }
        }
        for(i=0;i<N;i++)
        {
            if(count_X[i]>Max)
            {
                Max = count_X[i];
            }
        }
        for(i=0;i<N;i++)
        {
            Void += (Max - count_X[i]);
        }
        cout<<Void<<endl;
    }
    return 0;
}

