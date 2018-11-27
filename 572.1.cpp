#include<iostream>
#include<queue>
#define X 110
using namespace std;

int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
void bfs(int i,int j,int row,int column,char mat[][X])
{
   // char visited[X];
    int tx,ty;
    pair<int,int> u;
    queue<pair<int,int> >bfsq;
    bfsq.push(make_pair(i,j));
    while(!bfsq.empty())
    {
        u=bfsq.front();
        bfsq.pop();
        for(i=0;i<8;i++)
        {
            tx=u.first+fx[i];
            ty=u.second+fy[i];
            if(tx>=0&&tx<row&&ty>=0&&ty<column&&mat[tx][ty]=='@')
            {
                mat[tx][ty]='*';
                bfsq.push(make_pair(tx,ty));
            }
        }
    }
}

int main()
{
    int row,column,i,j,counter;
    while(1)
    {
        cin>>row>>column;
        counter=0;
        if(row==0&&column==0)
        {
            break;
        }
        char mat[X][X];
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                cin>>mat[i][j];
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                if(mat[i][j]=='@')
                {
                    bfs(i,j,row,column,mat);
                    counter++;
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
