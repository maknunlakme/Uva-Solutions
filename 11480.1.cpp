#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int counter=0,n,i,j,temp;
    long long int total;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        total=0;
        for(j=1;;j++)
        {
            temp=((n-j)-1)/2;
            if(temp>j)
            {
                total+=temp-j;
            }
            else
            {
                break;
            }
        }
        counter++;
        printf("Case %d: %lld\n",counter,total);
    }
    return 0;
}
