#include<bits/stdc++.h>
#define X 100010
using namespace std;

int arr[X];
int table[X][20];

int sparse(int n)
{
    int i,j,total=0;
    for(i=1;i<=n;i++)
    {
        table[i][0]=arr[i];
    }
    for(j=1;(1<<j)<=n;j++)
    {
        for(i=1;(i+(1<<(j-1))-1)<=n;i++)
        {
            table[i][j]=min(table[i][j-1],table[i+(1<<(j-1))][j-1]);
            total+=table[i][j];
        }
    }
    return total;
}
int main()
{
    int test,i,j,k,a,b,c,n,q,add;
    char brr[X];
    while(scanf("%d",&n)==1)
    {
        add=0;
        cin.ignore(100,'\n');
        for(i=1;i<=n;i++)
        {
            scanf("%c",&brr[i]);
            arr[i]=(brr[i]-'0');
            add+=arr[i];
        }
        printf("%d\n",sparse(n)+add);
    }
    return 0;
}
