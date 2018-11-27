#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int guess,high,low;
    char line[15];
    bool breaker=false,honest;
    while(1)
    {
        high=11;
        low=0;
        while(1)
        {
            honest=false;
            scanf("%d",&guess);
            getchar();
            if(guess==0)
            {
                breaker=true;
                break;
            }
            gets(line);
            if(strcmp(line,"too high")==0)
            {
                if(guess<high)
                {
                    high=guess;
                }
            }
            else if(strcmp(line,"too low")==0)
            {
                if(guess>low)
                {
                    low=guess;
                }
            }
            else if(strcmp(line,"right on")==0)
            {
                if(guess<high&&guess>low)
                {
                    honest=true;
                }
                break;
            }
        }
        if(breaker==true)
        {
            break;
        }
        if(honest==true)
        {
            printf("Stan may be honest\n");
        }
        else
        {
            printf("Stan is dishonest\n");
        }
    }
    return 0;
}
