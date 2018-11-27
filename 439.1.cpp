#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#define X 10
using namespace std;

int fx[]= {-1,+1,-2,-2,-1,+1,+2,+2};
int fy[]= {+2,+2,-1,+1,-2,-2,-1,+1};

int cost[X][X];

int bfs(int a,int b)
{
    queue<pair<int,int> >q;
    pair<int,int> u;
    bool mark[X][X];
    memset(mark,0,sizeof mark);
    memset(cost,-1,sizeof cost);
    int i,x,y,answer;
    q.push(make_pair(a,b));
    cost[a][b]=0;
    mark[a][b]=1;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        //cout<<"kling"<<endl;
        for(i=0; i<8; i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            //cout<<x<<" "<<y<<" "<<mark<<" "<<mat[x][y]<<endl;
            if(x>=0&&x<8&&y>=0&&y<8&&mark[x][y]==0)
            {
                cost[x][y]=cost[u.first][u.second]+1;
                mark[x][y]=1;
                q.push(make_pair(x,y));
            }
        }
    }
}

int main()
{
    int a,b,c,d,i,j;
    char e,f,temp;
    while(cin>>e>>a>>f>>b)
    {
        c=(e-'a');
        d=(f-'a');
        a--;
        b--;
        bfs(a,c);
        cout<<"To get from "<<e<<a+1<<" to "<<f<<b+1<<" takes "<<cost[b][d]<<" knight moves."<<endl;
    }
    return 0;
}
