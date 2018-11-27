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
        int length = strlen(line);
        if(length==0)
        {
            break;
        }
        int test;
        scanf("%d",&test);
        int loop = 0;
        count_case++;
        printf("Case %d:\n",count_case);
        while(loop<test)
        {
            int i,j;
            bool print = true;
            scanf("%d%d",&i,&j);
            if(i>j)
               {
                   std::swap(i,j);
               }
            if(line[i]=='0')
            {
                for(;i<=j;++i)
                {
                    if(line[i]=='1')
                    {
                        printf("No\n");
                        print = false;
                        break;
                    }
                }
                if(print==true)
                {
                    printf("Yes\n");
                }
            }
            else if(line[i]=='1')
            {
                for(;i<=j;++i)
                {
                    if(line[i]=='0')
                    {
                        printf("No\n");
                        print = false;
                        break;
                    }
                }
                if(print==true)
                {
                    printf("Yes\n");
                }
            }
            loop++;
        }
        getchar();
    }
    return 0;
}
