#include<iostream>
#include<queue>
#include<cstring>
#include<cstdio>
#include<sstream>
#define X 110
using namespace std;

int mat[X][X];
int fx[]={+0,+0,+1,-1};
int fy[]={+1,-1,+0,+0};
int bfs(int n,int a,int b,int check)
{
    queue<pair<int,int> >q;
    pair<int,int> u;
    int i,j,x,y,counter=0;
    q.push(make_pair(a,b));
    mat[a][b]=-1;
    counter++;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<4;i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=1&&x<=n&&y>=1&&y<=n&&mat[x][y]==check)
            {
                q.push(make_pair(x,y));
                counter++;
                mat[x][y]=-1;
            }
        }
    }
    return counter;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int n,a,b,i,j,answer,temp;
    bool good;
    string line;
    while(1)
    {
        cin>>n;
        cin.ignore(100,'\n');
        good=true;
        memset(mat,0,sizeof mat);
        if(n==0)
        {
            break;
        }
        for(i=0;i<n-1;i++)
        {
            getline(cin,line);
            stringstream ss(line);
            while(ss>>a>>b)
            {
                mat[a][b]=i+1;
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(mat[i][j]>-1)
                {
                    answer=bfs(n,i,j,mat[i][j]);
                    if(answer<n)
                    {
                        good=false;
                    }
                }
            }
        }
        if(good==true)
        {
            cout<<"good"<<endl;
        }
        else
        {
            cout<<"wrong"<<endl;
        }
    }
    return 0;
}
