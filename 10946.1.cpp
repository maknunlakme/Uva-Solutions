#include<iostream>
#include<queue>
#include<algorithm>
#include<cstdio>
#define X 60
using namespace std;

int fx[]={+0,+0,+1,-1};
int fy[]={+1,-1,+0,+0};

bool comparison(const pair<int,int>&left,const pair<int,int>&right)
{
    if(left.first==right.first)
    {
        return left.second<right.second;
    }
    else
    {
        return left.first>right.first;
    }
}


int bfs(int row,int column,int a,int b,string mat[],char check)
{
    queue<pair<int,int> >q;
    pair<int,int> u;
    int i,x,y,counter=1;
    q.push(make_pair(a,b));
    mat[a][b]='.';
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<4;i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]==check)
            {
                counter++;
                //cout<<x<<" "<<y<<" "<<check<<endl;
                q.push(make_pair(x,y));
                mat[x][y]='.';
                //cout<<mat[x][y]<<endl;
            }
        }
    }
    //cout<<"return "<<counter<<" "<<check<<endl;
    return counter;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int row,column,counter=0,i,j,length;
    char temp;
    while(1)
    {
        cin>>row>>column;
        string mat[X];
        counter++;
        vector<pair<int,char> > answer;
        if(row==0&&column==0)
        {
            break;
        }
        for(i=0;i<row;i++)
        {
            cin>>mat[i];
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                if(mat[i][j]!='.')
                {
                    temp=mat[i][j];
                    answer.push_back(make_pair(bfs(row,column,i,j,mat,temp),temp));
                }
            }
        }
        sort(answer.begin(),answer.end(),comparison);
        length=answer.size();
        cout<<"Problem "<<counter<<":"<<endl;
        for(i=0;i<length;i++)
        {
            cout<<answer[i].second<<" "<<answer[i].first<<endl;
        }
    }
    return 0;
}
