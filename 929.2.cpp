#include<iostream>
#include<queue>
#include<cstring>
#include<cstdio>
#include<sstream>
#include<climits>
#define X 110
using namespace std;

int mat[X][X];
int dis[X][X];

int fx[]={+0,+0,+1,-1};
int fy[]={+1,-1,+0,+0};

void dijkstra(int row,int column,int a,int b)
{
    queue<pair<int,int> >q;
    pair<int,int> u;
    int i,j,x,y,counter=0;
    for(i=0;i<X;i++)
    {
        for(j=0;j<X;j++)
        {
            dis[i][j]=INT_MAX;
        }
    }
    q.push(make_pair(a,b));
    dis[a][b]=mat[a][b];
    mat[a][b]=-1;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<4;i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]>-1)
            {
                if(dis[u.first][u.second]+mat[x][y]<dis[x][y])
                {
                    dis[x][y]=dis[u.first][u.second]+mat[x][y];
                }
                q.push(make_pair(x,y));
            }
        }
        mat[x][y]=-1;
    }
}

int main()
{
    int test,i,j,temp,row,column;
    cin>>test;
    while(test--)
    {
        cin>>row>>column;
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
               cin>>mat[i][j];
            }
        }
        dijkstra(row,column,0,0);
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
               cout<<dis[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"ans "<<dis[row-1][column-1]<<endl;
    }
    return 0;
}
