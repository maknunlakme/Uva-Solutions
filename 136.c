#include<stdio.h>
int main()
{
    int a,b,c;
    for(b=1,c=0,a=b;c<10;b++)
    {
        while(a%2==0)
        {
            a/=2;
        }
        while(a%3==0)
        {
            a/=3;
        }
        while(a%5==0)
        {
            a/=5;
        }
        if(a==1)
        {
            c++;
            printf("%d %d %d\n", a,b,c);

        }
    }
}
