#include<string.h>
#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test!=0)
    {
        char line[1100000];
        scanf("%s",line);
        int replaced;
        scanf("%d",&replaced);
        int length = strlen(line);
        int i,j;
        for(i=0;i<replaced;i++)
        {
            char temp1[10],temp2[10];
            scanf("%s %s",temp1,temp2);
            for(j=0;j<length;j++)
            {
                if(line[j]==temp2[0])
                {
                    line[j]=temp1[0];
                }
            }
        }
        printf("%s\n",line);
        test--;
    }
    return 0;
}
