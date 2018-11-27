#include<iostream>
#include<cstring>
#define X 110
using namespace std;

char arr[X][X];
int brr[X][X];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    int n,m,i,j,k,ans,counter;
    while(1)
    {
        memset(brr,0,sizeof brr);
        cin>>n;
        if(n==0) break;
        cin>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        //cerr<<"AAA "<<n<<" "<<m<<endl;
        for(j=0;j<m;j++)
        {
            for(i=0;i<n;i++)
            {
                brr[i+1][j]=arr[i][j]-'0';
                if(brr[i][j]!=0 and brr[i+1][j]!=0) brr[i+1][j]+=brr[i][j];
                //cerr<<"RR "<<i<<" "<<" "<<j<<brr[i+1][j]<<endl;
            }
        }
        ans=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                counter=0;
                for(k=0;k<m;k++)
                {
                    if((brr[j][k]-brr[i][k])==j-i)
                    {
                        counter++;
                    }
                    else
                    {
                        ans+=(counter*(counter+1))/2;
                        counter=0;
                    }
                    //cerr<<"DDD "<<i<<" "<<j<<" "<<k<<" "<<counter<<" "<<ans<<endl;
                }
                ans+=(counter*(counter+1))/2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
