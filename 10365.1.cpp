#include<iostream>
using namespace std;

int main()
{
    int test,n,mini,i,j,k,ans;
    cin>>test;
    while(test--)
    {
        cin>>n;
        mini=9000000000;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                k=n/(i*j);
                if((i*j*k)==n)
                {
                    ans=(i*j*2) + (j*k*2) + (k*i*2);
                    //cerr<<"RR "<<i<<" "<<j<<" "<<k<<" "<<ans<<endl;
                    mini=min(mini,ans);
                }
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}
