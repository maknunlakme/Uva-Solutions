#include<iostream>
#include<queue>
#include<cstdio>
#include<string>
#define X 110
using namespace std;

int fx[]={+0,+0,+1,-1};
int fy[]={+1,-1,+0,+0};

void bfs(int grid,int i,int j,string mat[])
{
    queue<pair<int,int> >q;
    pair<int,int> u;
    int k,x,y;
    q.push(make_pair(i,j));
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(k=0;k<4;k++)
        {
            x=u.first+fx[k];
            y=u.second+fy[k];
            if(x>=0&&x<grid&&y>=0&&y<grid)
            {
                if(mat[x][y]=='x'||mat[x][y]=='@')
                {
                    mat[x][y]='.';
                    q.push(make_pair(x,y));
                }
            }
        }
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,grid,i,j,k,counter;
    string mat[X];
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>grid;
        cin.ignore(100,'\n');
        for(j=0;j<grid;j++)
        {
            cin>>mat[j];
        }
        //for(j=0;j<grid;j++)
        {
            //cout<<mat[j]<<endl;
        }
        counter=0;
        for(j=0;j<grid;j++)
        {
            for(k=0;k<grid;k++)
            {
                if(mat[j][k]=='x')
                {
                    mat[j][k]='.';
                    bfs(grid,j,k,mat);
                    counter++;
                }
            }
        }
        cout<<"Case "<<i+1<<": "<<counter<<endl;
    }
    return 0;
}
