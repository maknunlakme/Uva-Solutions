#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int test;
    while(1)
    {
        char word[20];
        scanf("%d",&test);
        if(test==0)
        {
            break;
        }
        int temp;
        int top=1;
        int bottom=6;
        int north=2;
        int south=5;
        int west=3;
        int east=4;
        while(test--)
        {
            scanf("%s",word);
            if(strcmp(word,"north")==0)
            {
                temp=north;
                north=top;
                top=south;
                south=bottom;
                bottom=temp;
            }
            else if(strcmp(word,"south")==0)
            {
                temp=south;
                south=top;
                top=north;
                north=bottom;
                bottom=temp;
            }
            else if(strcmp(word,"east")==0)
            {
                temp=east;
                east=top;
                top=west;
                west=bottom;
                bottom=temp;
            }
            else if(strcmp(word,"west")==0)
            {
                temp=west;
                west=top;
                top=east;
                east=bottom;
                bottom=temp;
            }
        }
        printf("%d\n",top);
    }
    return 0;
}
