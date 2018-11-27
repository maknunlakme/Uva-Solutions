#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int i,j,n,counter;
    long long int casecounter=0;
    while(1)
    {
        scanf("%lld%lld",&i,&j);
        if(i<0&&j<0)
        {
            break;
        }
        counter=1;
        for(n=i;n>1;counter++)
        {
            if(n%2!=0)
            {
                n=3*n+1;
                if(n>j)
                {
                    break;
                }
                counter++;
                n>>=1;
            }
            else
                n>>=1;
        }
        casecounter++;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",casecounter,i,j,counter);
    }
    return 0;
}
