#include<iostream>
#include<queue>
#include<string>
#include<cstdio>
#define X 250
using namespace std;

int fx[]={+0,+0,+1,-1,+1,-1};
int fy[]={+1,-1,+0,+0,+1,-1};

int bfs(int grid,int a,int b,string mat[],char pawn)
{
    queue<pair<int,int> >q;
    pair<int,int> u;
    int x,y,i;
    q.push(make_pair(a,b));
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<6;i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=0&&x<grid&&y>=0&&y<grid&&mat[x][y]==pawn)
            {
                if(pawn=='b'&&x==grid-1)
                {
                    return 1;
                }
                if(pawn=='w'&&y==grid-1)
                {
                    return 1;
                }
                mat[x][y]='.';
                q.push(make_pair(x,y));
            }
        }
    }
    return 0;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int grid,counter=0,i,j;
    bool print;
    while(1)
    {
        cin>>grid;
        counter++;
        if(grid==0)
        {
            break;
        }
        string mat[X];
        for(i=0;i<grid;i++)
        {
            cin>>mat[i];
        }
        cout<<counter;
        for(i=0;i<grid;i++)
        {
            if(bfs(grid,0,i,mat,'b')==1)
            {
                cout<<" B"<<endl;
                break;
            }
        }
        for(i=0;i<grid;i++)
        {
            if(bfs(grid,i,0,mat,'w')==1)
            {
                cout<<" W"<<endl;
                break;
            }
        }
    }
    return 0;
}
