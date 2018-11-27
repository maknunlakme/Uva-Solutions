#include<iostream>
using namespace std;

int main()
{
    long long test,n,b,i,j,k,total,ans,temp;
    cin>>test;
    while(test--)
    {
        cin>>n>>b;
        ans=0;
        for(i=0;i<b;i++)
        {
            cin>>k;
            total=1;
            for(j=0;j<k;j++)
            {
                cin>>temp;
                total=(total*temp)%n;
            }
            ans=(ans+total)%n;
        }
        cout<<ans<<endl;
    }
    return 0;
}
