#include<iostream>
using namespace std;

char arr[110][110];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test,n,m,q,r,c,i,j,k,ans;
    bool double_break;
    cin>>test;
    while(test--)
    {
        cin>>m>>n>>q;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }
        cout<<m<<" "<<n<<" "<<q<<endl;
        for(k=0; k<q; k++)
        {
            cin>>r>>c;
            ans=1;
            double_break=false;
            while(1)
            {
                for(i=r-ans; i<=r+ans; i++)
                {
                    for(j=c-ans; j<=c+ans; j++)
                    {
                        //cerr<<"AAA "<<i<<" "<<j<<endl;
                        if(i>=0 and i<m and j>=0 and j<n)
                        {
                            if(arr[i][j]!=arr[r][c])
                            {
                                double_break=true;
                                break;
                            }
                        }
                        else
                        {
                            double_break=true;
                            break;
                        }
                    }
                }
                //cerr<<"QQQ "<<i<<" "<<j<<" "<<ans<<endl;
                if(double_break==true) break;
                else ans++;
            }
            cout<<(ans*2)-1<<endl;
        }
    }
    return 0;
}
