#include<iostream>
#include<cstring>
#include<stdio.h>
#include<algorithm>
int main()
{
    char line[1000100];
    int count_case = 0;

    while(gets(line))
    {
        int print[1000100] = {0};
        int length = strlen(line);
        if(length==0)
        {
            break;
        }
        int test;
        scanf("%d",&test);
        int loop = 0;
        while(loop<test)
        {
            int i,j;
            scanf("%d%d",&i,&j);
            if(i>j)
               {
                   std::swap(i,j);
               }
            if(line[i]!=line[j])
            {
                print[loop] = 1;
            }
            else
            {
                if(line[i]=='0')
                {
                    for(;i<=j;++i)
                    {
                        if(line[i]=='1')
                        {
                            print[loop] = 1;
                            break;
                        }
                    }
                }
                else if(line[i]=='1')
                {
                    for(;i<=j;++i)
                    {
                        if(line[i]=='0')
                        {
                            print[loop] = 1;
                            break;
                        }
                    }
                }
            }
            loop++;
        }
        count_case++;
        printf("Case %d:\n",count_case);
        for(int loop=0;loop!=test;loop++)
        {
            if(print[loop]==0)
            {
                printf("Yes\n");
            }
            else if(print[loop]==1)
            {
                printf("No\n");
            }
        }
        getchar();
    }
    return 0;
}
