#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#define X 1000010
using namespace std;

bool mark[X];

long long r(long long a)
{
    return a*a;
}

int main()
{
    long long i,j,temp,root,n,a,b,c,d,p,x,y,z;
    while(cin>>n)
    {
        d=p=0;
        memset(mark,0,sizeof mark);
        for(i=1; i*i<=n; i++)
        {
            for(j=i+1; j*j<=n; j+=2)
            {
                if(__gcd(i,j)==1)
                {
                    x=abs(r(j)-r(i));
                    y=2*i*j;
                    z=r(j)+r(i);
                    if(z>n)
                    {
                        break;
                    }
                    a=x;
                    b=y;
                    c=z;
                    //cerr<<"AA "<<a<<" "<<b<<" "<<c<<endl;
                    while(z<=n)
                    {
                        mark[x]=mark[y]=mark[z]=1;
                        x+=a;
                        y+=b;
                        z+=c;
                    }
                    d++;
                }
            }
        }
        for(i=1; i<=n; i++)
        {
            if(mark[i]==0)
                p++;
        }
        cout<<d<<" "<<p<<endl;
    }
    return 0;
}
