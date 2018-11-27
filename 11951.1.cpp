#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<climits>
#define X 110
using namespace std;

long long arr[X][X];
long long brr[X];

int main()
{
    long long n,m,s,i,j,k,now,mini,maxi,block,start,t,test;
    cin>>test;
    for(t=1; t<=test; t++)
    {
        memset(arr,0,sizeof arr);
        cin>>n>>m>>s;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        mini=LLONG_MAX;
        maxi=0;
        block=0;
        for(i=0; i<n; i++)
        {
            memset(brr,0,sizeof brr);
            for(j=i; j<n; j++)
            {
                now=0;
                start=0;
                for(k=0; k<m; k++)
                {
                    brr[k]+=arr[j][k];
                    now+=brr[k];
                    while(now>s)
                    {
                        now-=brr[start];
                        start++;
                    }
                    block=(k-(start-1))*(j-(i-1));
                    //cerr<<"AA "<<i<<" "<<j<<" "<<k<<" "<<block<<" "<<now<<endl;
                    if(block>maxi)
                    {
                        maxi=block;
                        mini=now;
                    }
                    else if(block==maxi and mini>now)
                    {
                        mini=now;
                    }
                }
            }
        }
        cout<<"Case #"<<t<<": "<<maxi<<" "<<mini<<endl;
    }
    return 0;
}

