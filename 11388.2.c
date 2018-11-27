#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test!=0)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(b%a==0)
        {
            printf("%d %d\n",a,b);
        }
        else
        {
            printf("-1\n");
        }
        test--;
    }
    return 0;
}
