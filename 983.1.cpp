#include<iostream>
#define X 1010
using namespace std;

int arr[X][X];

int main()
{
    int n,m,i,j,x,y,ans,total,t=0;
    while(cin>>n>>m)
    {
        if(t!=0) cout<<endl;
        t++;
        total=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>arr[i][j];
                arr[i][j]+=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
            }
        }
        for(i=1;i<=n-m+1;i++)
        {
            for(j=1;j<=n-m+1;j++)
            {
                x=i+m-1;
                y=j+m-1;
                //cerr<<"A "<<i<<" "<<j<<" "<<x<<" "<<y<<endl;
                ans=arr[x][y]-arr[x][j-1]-arr[i-1][y]+arr[i-1][j-1];
                total+=ans;
                printf("%d\n",ans);
            }
        }
        printf("%d\n",total);
    }
    return 0;
}
