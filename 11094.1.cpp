#include<iostream>
#include<cstdio>
#include<queue>
#include<string>
#define X 30
using namespace std;

int fx[]= {+0,+0,+1,-1};
int fy[]= {+1,-1,+0,+0};

int bfs(int row,int column,int a,int b,string newmat[],char check)
{
    queue<pair<int,int> >q;
    pair<int,int> u;
    int i,j,x,y,counter;
    string mat[X];
    for(i=0; i<row; i++)
    {
        mat[i]=newmat[i];
    }
    q.push(make_pair(a,b));
    mat[a][b]='.';
    counter=1;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0; i<4; i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(y<0)
            {
                y+=column;
            }
            else
            {
                y%=column;
            }
            if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]==check)
            {
                mat[x][y]='.';
                counter++;
                q.push(make_pair(x,y));
            }
        }
    }
    return counter;
}

void mark(int row,int column,int a,int b,string mat[],char check)
{
    queue<pair<int,int> >q;
    pair<int,int> u;
    int i,j,x,y,counter;
    q.push(make_pair(a,b));
    mat[a][b]='.';
    counter=1;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0; i<4; i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(y<0)
            {
                y+=column;
            }
            else
            {
                y%=column;
            }
            if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]==check)
            {
                mat[x][y]='.';
                counter++;
                q.push(make_pair(x,y));
            }
        }
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
   // freopen("tempout.txt","w",stdout);
    int row,column,a,b,i,j,city,maxi;
    char temp;
    while(cin>>row>>column)
    {
        string mat[X];
        maxi=0;
        for(i=0; i<row; i++)
        {
            cin>>mat[i];
        }
        cin>>a>>b;
        temp=mat[a][b];
        mark(row,column,a,b,mat,mat[a][b]);
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if(mat[i][j]==temp)
                {
                    city=bfs(row,column,i,j,mat,temp);
                    if(city>maxi)
                    {
                        maxi=city;
                    }
                }
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
