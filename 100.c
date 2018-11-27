#include<stdio.h>
int main()
{
    int n,i,j,count,count2,c_max;
    while(scanf("%d", &i))
    {
        if(i==0)
        {
            break;
        }
        scanf("%d", &j);
        if(j==0)
        {
            break;
        }
        printf("%d %d ", i,j);
        for(c_max=0;i<=j;i++)
        {
            for(n=i,count=1;n>1;count++)
            {
                if(n%2!=0)
                    n=3*n+1;
                else
                    n/=2;
                printf("%d ", n);
            }
            printf("\n");
            if(c_max<count)
                c_max=count;
        }
        printf("%d\n",c_max);
    }
    return 0;
}
