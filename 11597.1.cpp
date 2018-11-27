#include<cstdio>
int main()
{
    int temp,counter=0;
    while(1)
    {
        scanf("%d",&temp);
        counter++;
        if(temp==0)
        {
            break;
        }
        printf("Case %d: %d\n",counter,temp/2);
    }
    return 0;
}
