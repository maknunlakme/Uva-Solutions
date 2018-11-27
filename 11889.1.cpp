#include<iostream>
#include<vector>
#include<cmath>
#define X 4000
using namespace std;

bool arr[X+10];
vector<int>prime;

void sieve()
{
    int i,j;
    for(i=2; i*i<=X; i++)
    {
        if(arr[i]==0)
        {
            for(j=2; i*j<=X; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    for(i=2; i<=X; i++)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }
}

int cal(int a,int c)
{
    int i,ans=1,counter=0,aa,cc;
    for(i=0;i<prime.size() and c>=prime[i];i++)
    {
        aa=0;
        cc=0;
        while(a%prime[i]==0)
        {
            a/=prime[i];
            aa++;
        }
        while(c%prime[i]==0)
        {
            c/=prime[i];
            cc++;
        }
        //cerr<<"AA "<<aa<<" "<<cc<<endl;
        if(aa!=cc and cc>0)
        {
            ans*=round(pow(prime[i],cc));
        }
    }
    if(c>1)
    {
        if(a!=c) ans*=c;
    }
    return ans;
}

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    sieve();
    int a,c,i,j,ans,test;
    bool okay;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&a,&c);
        if(c%a)
        {
            printf("NO SOLUTION\n");
        }
        else
        {
            printf("%d\n",cal(a,c));
        }
    }
    return 0;
}
