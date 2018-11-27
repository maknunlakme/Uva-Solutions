#include<iostream>
#define X 10010
using namespace std;

int prime[X];
void sieve()
{
    int i,j;
    prime[0]=1;
    prime[1]=1;
    for(i=2;i*i<=X;i++)
    {
        if(prime[i]==0)
        {
            for(j=i;i*j<=X;j++)
            {
                prime[j*i]=1;
            }
        }
    }
}

int main()
{
    int n,test,i,div,maxi;
    sieve();
    cin>>test;
    while(test--)
    {
        cin>>n;
        maxi=0;
        for(i=2;i<=n;i++)
        {
            if(prime[i]==0)
            {
                div=n/i;
                if(div*i<n&&(div+1)*i>n)
                {
                    if((n-div*i)>maxi)
                    {
                        maxi=i;
                    }
                }
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
