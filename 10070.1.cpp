#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int year,counter=0;
    while(scanf("%d",&year)==1)
    {
        bool leapyear=false;
        if(counter!=0)
        {
            printf("\n");
        }
        int flag=0;
        if((year%4==0&&year%100!=0)||year%400==0)
        {
            printf("This is leap year.\n");
            flag++;
            leapyear=true;
        }
        if(year%15==0)
        {
            printf("This is huluculu festival year.\n");
            flag++;
        }
        if((year%55)==0&&leapyear==true)
        {
            printf("This is bulukulu festival year.\n");
            flag++;
        }
        if(flag==0)
        {
            printf("This is an ordinary year.\n");
        }
        counter++;
    }
    return 0;
}
