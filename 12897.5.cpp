#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test!=0)
    {
        char line[1100000];
        char alpha[30]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        scanf("%s",line);
        int replaced;
        scanf("%d",&replaced);
        int length = strlen(line);
        int i,j;
        for(i=0;i<replaced;i++)
        {
            char temp1[10],temp2[10];
            scanf("%s %s",temp1,temp2);
            for(j=0;j<26;j++)
            {
                if(alpha[j]==temp2[0])
                {
                    alpha[j]=temp1[0];
                }
            }
        }
        for(i=0,j=0;i<length;i++)
        {
            if(line[i]>64&&line[i]<91)
            {
                line[i]=alpha[line[i]-65];
            }
        }
        printf("%s\n",line);
        test--;
    }
    return 0;
}
