#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char line[1000];
        scanf("%s",line);
        int replaced;
        scanf("%d",&replaced);
        int length = strlen(line);
        for(int i=0;i<replaced;i++)
        {
            char temp1[10],temp2[10];
            scanf("%s",&temp1);
            scanf("%s",&temp2);
            for(int j=0;j<length;j++)
            {
                if(line[j]==temp2[0])
                {
                    line[j]=temp1[0];
                }
            }
        }
        printf("%s\n",line);
    }
    return 0;
}
