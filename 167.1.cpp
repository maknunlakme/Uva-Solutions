#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

int arr[10][10];
int r1[10],r2[20],r3[20];
int maxi;

void rec(int y,int ans)
{
    if(y==8)
    {
        //cerr<<"AA "<<ans<<endl;
        maxi=max(maxi,ans);
        return;
    }
    int x;
    for(x=0;x<8;x++)
    {
        if(r1[x] or r2[x+y] or r3[x-y+8-1]) continue;
        r1[x]=r2[x+y]=r3[x-y+8-1]=1;
        //cerr<<"PP "<<x<<" "<<y<<endl;
        rec(y+1,ans+arr[x][y]);
        r1[x]=r2[x+y]=r3[x-y+8-1]=0;
    }
}

int main()
{
    //#ifdef maknun
    {
        //freopen("tempin.txt","r",stdin);
    }
    //#endif // maknun
    int test,t,i,j;
    cin>>test;
    for(t=1;t<=test;t++)
    {
        maxi=-1;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cin>>arr[i][j];
            }
        }
        rec(0,0);
        cout<<setw(5)<<maxi<<endl;
    }
    return 0;
}
