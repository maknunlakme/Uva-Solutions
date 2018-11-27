#include<iostream>
#include<cstdio>
#include<cstring>
#define X 110
using namespace std;

bool mat[X][X],answer[X][X],visit[X],mark[X];
int n;

void dfs(int u,int absent)
{
    //cerr<<"DD "<<u<<" "<<absent<<endl;
    if(u==absent) return;
    int i;
    visit[u]=1;
    for(i=0; i<n; i++)
    {
        if(mat[u][i]!=0 and visit[i]==0) dfs(i,absent);
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,i,j,k;
    cin>>test;
    for(k=0; k<test; k++)
    {
        cin>>n;
        memset(visit,0,sizeof visit);
        memset(mark,0,sizeof mark);
        memset(mat,0,sizeof mat);
        memset(answer,0,sizeof answer);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>mat[i][j];
            }
        }
        dfs(0,-1);
        for(i=0; i<n; i++) mark[i]=visit[i];
        for(i=0; i<n; i++)
        {
            memset(visit,0,sizeof visit);
            dfs(0,i);
            for(j=0; j<n; j++)
            {
                //cerr<<i<<" "<<j<<" "<<mark[j]<<" "<<visit[j]<<endl;
                if(mark[j]==1 and visit[j]==0) answer[i][j]=1;
            }
        }
        for(i=0; i<n; i++) answer[i][i]=mark[i];
        cout<<"Case "<<k+1<<":"<<endl;
        cout<<"+";
        for(i=0; i<2*n-1; i++) cout<<"-";
        cout<<"+"<<endl;
        for(i=0; i<n; i++)
        {
            cout<<"|";
            for(j=0; j<n; j++)
            {
                if(answer[i][j]==1) cout<<"Y";
                else cout<<"N";
                cout<<"|";
            }
            cout<<endl;
            cout<<"+";
            for(j=0; j<2*n-1; j++) cout<<"-";
            cout<<"+"<<endl;
        }
    }
    return 0;
}
