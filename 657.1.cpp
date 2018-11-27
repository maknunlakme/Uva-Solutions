#include<iostream>
#include<queue>
#define X 60
using namespace std;

int fx[]={+0,+0,+1,-1,+1,+1,-1,-1};
int fy[]={+1,-1,+0,+0,+1,-1,+1,-1};

string mat[X];

int bfsx(int row,int column,int a,int b)
{
    //cout<<"run bfsx"<<endl;
    queue<pair<int,int> >q;
    pair<int,int> u;
    int i,x,y;
    q.push(make_pair(a,b));
    mat[a][b]='.';
    //cout<<"A B"<<a<<" "<<b<<endl;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<4;i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            //cout<<u.first<<" "<<u.second<<" "<<i<<" "<<fx[i]<<" "<<fy[i]<<endl;
            if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]=='X')
            {
                //cout<<x<<" "<<y<<endl;
                q.push(make_pair(x,y));
                mat[x][y]='.';
            }
        }
    }
}

int bfs(int row,int column,int a,int b)
{
    //cout<<"play bfs"<<endl;
    queue<pair<int,int> >q;
    pair<int,int> u;
    int i,x,y,counter=0;
    q.push(make_pair(a,b));
    if(mat[a][b]=='*')
    {
        mat[a][b]='.';
    }
    else if(mat[a][b]=='X')
    {
        bfsx(row,column,a,b);
        counter++;
    }
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<8;i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            //cout<<x<<" "<<y<<" "<<i<<endl;
            if(x>=0&&x<row&&y>=0&&y<column&&(mat[x][y]=='*'||mat[x][y]=='X'))
            {
                if(mat[x][y]=='X')
                {
                    //cout<<"X "<<x<<" "<<y<<endl;
                    bfsx(row,column,x,y);
                    counter++;
                }
                mat[x][y]='.';
                q.push(make_pair(x,y));
            }
        }
    }
    return counter;
}

int main()
{
    int row,column,i,j,answer,counter=0;
    bool first;
    while(1)
    {
        cin>>column>>row;
        first=false;
        counter++;
        if(row==0&&column==0)
        {
            break;
        }
        for(i=0;i<row;i++)
        {
            cin>>mat[i];
            //cout<<"Mat "<<mat[i]<<" "<<i<<endl;
        }
        cout<<"Throw "<<counter<<endl;
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                if(mat[i][j]=='*')
                {
                    //cout<<i<<" "<<j<<mat[i][j]<<endl;
                    answer=bfs(row,column,i,j);
                    if(first==false)
                    {
                        cout<<answer;
                    }
                    else
                    {
                        cout<<" "<<answer;
                    }
                    first=true;
                }
                if(mat[i][j]=='X')
                {
                    //cout<<i<<" "<<j<<mat[i][j]<<endl;
                    bfsx(row,column,i,j);
                    if(first==false)
                    {
                        cout<<1;
                    }
                    else
                    {
                        cout<<" "<<1;
                    }
                    first=true;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
