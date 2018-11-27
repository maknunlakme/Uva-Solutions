#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    char line[25];
    int N,i,j,Max,Void;
    while(scanf("%d", &N))
    {
        getchar();
        if(N==0)
        {
            break;
        }
        Max = 0;
        Void = 0;
        int count_x[12] = {0};
        for(i=0;i<N;i++)
        {
            gets(line);
            for(j=0;j<25;j++)
            {
                if(line[j]=='X')
                {
                    count_x[i]++;
                    line[j] = '\0';
                }
            }
        }
        for(i=0;i<N;i++)
        {
            if(count_x[i]>Max)
            {
                Max = count_x[i];
            }
        }
        for(i=0;i<N;i++)
        {
            Void += Max - count_x[i];
        }
        cout<<Void<<endl;

    }
    return 0;
}
