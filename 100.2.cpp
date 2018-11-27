#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long int i,j,count,count2,c_max;
    while(scanf("%d%d", &i,&j)==2)
    {
        printf("%d %d ", i,j);
        if(i>j)
        {
            swap(i,j);
        }
        for(c_max=0;i<=j;i++)
        {
            unsigned long int n;
            for(n=i,count=1;n>1;count++)
            {
                if(n%2!=0)
                {
                    n=3*n+1;
                    n>>=1;
                    count++;
                }
                else
                    n>>=1;
            }
            if(c_max<count)
                c_max=count;
        }
        printf("%d\n",c_max);
    }
    return 0;
}
