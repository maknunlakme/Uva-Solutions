#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#define X 10
using namespace std;

int fx[]= {-1,+1,-2,-2,-1,+1,+2,+2};
int fy[]= {+2,+2,-1,+1,-2,-2,-1,+1};

int bfs(string mat[X],char mark)
{
    cout<<"hello"<<endl;
    queue<pair<int,int> >q;
    pair<int,int> u;
    int cost[X][X];
    memset(cost,-1,sizeof cost);
    int i,x,y,answer;
    q.push(make_pair(2,2));
    cost[2][2]=0;
    cout<<"bling"<<endl;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        //cout<<"kling"<<endl;
        for(i=0; i<8; i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(mat[x][y]==' ')
            {
                answer=cost[x][y];
                return answer;
            }
            cout<<x<<" "<<y<<" "<<mark<<" "<<mat[x][y]<<endl;
            if(x>=0&&x<5&&y>=0&&y<5&&mat[x][y]==mark)
            {
                cost[x][y]=cost[u.first][u.second]+1;
                //cout<<"cost "<<cost[x][y]<<endl;
                if(cost[x][y]>11)
                {
                    return -1;
                }
            }
            q.push(make_pair(x,y));
            //cout<<"happen"<<endl;
        }
    }
    if(cost[x][y]>11)
    {
        return -1;
    }
}

int main()
{
    int test,answer,i;
    cin>>test;
    cin.ignore(100,'\n');
    while(test--)
    {
        string mat[X];
        for(i=0; i<5; i++)
        {
            getline(cin,mat[i]);
        }
        answer=bfs(mat,mat[2][2]);
        if(answer==-1)
        {
            cout<<"Unsolvable in less than 11 move(s)."<<endl;
        }
        else
        {
            cout<<"Solvable in "<<answer<<" move(s)."<<endl;
        }
    }
    return 0;
}
