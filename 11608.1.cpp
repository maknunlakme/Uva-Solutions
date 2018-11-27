#include<stdio.h>
int main()
{
    int month[15],problem[15],i,hand,case_counter=0;
    while(scanf("%d",&hand)==1)
    {
        case_counter++;
        if(hand<0)
        {
            break;
        }
        for(i=0;i<12;i++)
        {
            scanf("%d",&month[i]);
        }
        for(i=0;i<12;i++)
        {
            scanf("%d",&problem[i]);
        }
        printf("Case %d:\n",case_counter);
        for(i=0;i<12;i++)
        {
            if(problem[i]>hand)
            {
                printf("No problem. :(\n");
                hand+=month[i];
            }
            else
            {
                printf("No problem! :D\n");
                hand+=month[i];
                hand-=problem[i];
            }
        }
    }
    return 0;
}
