#include<iostream>
#include<queue>
#include<cstring>
#include<cstdio>
#define X 1005
using namespace std;

int fx[]={+0,+0,+1,-1};
int fy[]={+1,-1,+0,+0};

int bfs(int starti,int startj,int endi,int endj,char mat[X][X],int row,int column)
{
    //cout<<"bling "<<endl;
    queue<pair<int,int> >q;
    pair<int,int> u;
    int distances[X][X];
    memset(distances,-1,sizeof distances);
    //cout<<"bling "<<endl;
    int i,x,y,counter=0;
    q.push(make_pair(starti,startj));
    if(mat[starti][startj]=='.')
    {
        counter++;
        distances[starti][startj]=0;
       // cout<<"bling "<<endl;
    }
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<4;i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]=='.')
            {
                distances[x][y]=distances[u.first][u.second]+1;
                //cout<<"Dis "<<distances[x][y]<<endl;
                mat[x][y]='*';
                if(x==endi&&y==endj)
                {
                    counter=distances[x][y];
                   // cout<<"Dis "<<distances[x][y]<<endl;
                    return counter;
                }
                q.push(make_pair(x,y));
            }
        }
    }
    counter=distances[x][y];
    return counter;
}
int main()
{
    int row,column,grid,bomb,a,b,i,j,starti,startj,endi,endj;
    while(1)
    {
        cin>>row>>column;
        char mat[X][X];
        memset(mat,'.',sizeof mat);
        if(row==0&&column==0)
        {
            break;
        }
        cin>>grid;
        for(i=0;i<grid;i++)
        {
            cin>>a>>bomb;
            for(j=0;j<bomb;j++)
            {
                cin>>b;
                mat[a][b]='*';
            }
        }
        cin>>starti>>startj;
        cin>>endi>>endj;
        cout<<bfs(starti,startj,endi,endj,mat,row,column)<<endl;
    }
    return 0;
}
