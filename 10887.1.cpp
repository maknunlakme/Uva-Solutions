#include<iostream>
#include<cstring>
#include<stdio.h>
int main()
{
    int test,count_case;
    char mstring[2000][20],nstring[2000][20],concatstring[5000000][50];
    std::cin>>test;
    count_case = 0;
    while(test!=0)
    {
        int m,n;
        std::cin>>m;
        std::cin>>n;
        getchar();
        for(int i=0;i<m;i++)
        {
            gets(mstring[i]);
        }
        for(int i=0;i<n;i++)
        {
            gets(nstring[i]);
        }
        count_case++;
        int k=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                strcpy(concatstring[k],mstring[i]);
                strcat(concatstring[k],nstring[j]);
                int length = strlen(concatstring[k]);
                concatstring[k][length]='\0';
                k++;
            }
        }
        int total = k;
        for(int i=0;i<k;i++)
        {
            for(int j=i+1;j<k;j++)
            {
                if(strcmp(concatstring[i],concatstring[j])==0)
                {
                    int length = strlen(concatstring[j]);
                    if(length!=0)
                    {
                        total--;
                    }
                    for(int l=0;l<length;l++)
                    {
                        concatstring[j][l]='\0';
                    }
                }
            }
        }
        std::cout<<"Case "<<count_case<<": "<<total<<std::endl;
        test--;
    }
    return 0;
}
