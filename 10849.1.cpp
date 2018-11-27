#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    int x1,x2,y1,y2,test,board,lines;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&lines);
        scanf("%d",&board);
        while(lines--)
        {
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            int temp1=abs(x1-x2);
            int temp2=abs(y1-y2);
            if(x1==x2&&y1==y2)
            {
                printf("0\n");
            }
            else if(temp1==temp2)
            {
                printf("1\n");
            }
            else if((temp1%2)!=(temp2%2))
            {
                printf("no move\n");
            }
            else
            {
                printf("2\n");
            }
        }
    }
    return 0;
}
