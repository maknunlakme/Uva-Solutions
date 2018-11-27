#include<iostream>
#include<queue>
#include<cstring>
#define X 50
using namespace std;

int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};

int bfs(int node,string mat[],int i,int j)
{
    //char visited[X];
    pair<int,int>u;
    int x,y;
    //memset(visited,0,sizeof visited);
    queue<pair<int,int> >Q;
    Q.push(make_pair(i,j));
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        for(i=0;i<8;i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=0&&x<node&&y>=0&&y<node&&mat[x][y]=='1')
            {
                mat[x][y]=0;
                Q.push(make_pair(x,y));
            }
        }
    }
}
int main()
{
    int node,counter=0,i,j,answer;
    while(cin>>node)
    {
        counter++;
        cin.ignore(100,'\n');
        string mat[X];
        answer=0;
        for(i=0;i<node;i++)
        {
            getline(cin,mat[i]);
        }
        for(i=0;i<node;i++)
        {
            for(j=0;j<node;j++)
            {
                if(mat[i][j]=='1')
                {
                    bfs(node,mat,i,j);
                    answer++;
                }
            }
        }
        cout<<"Image number "<<counter<<" contains "<<answer<<" war eagles."<<endl;
    }
    return 0;
}
