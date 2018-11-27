#include<iostream>
#include<cstdio>
#include<queue>
#include<string>
#define X 110
using namespace std;

int fx[]={+0,+0,+1,-1};
int fy[]={+1,-1,+0,+0};

int bfs(int row,int column,int a,int b,string mat[])
{
    queue<pair<int,int> >q;
    pair<int,int> u;
    int i,x,y,counter=0;
    q.push(make_pair(a,b));
    if(mat[a][b]=='0')
    {
        mat[a][b]='1';
        counter++;
    }
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<4;i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]=='0')
            {
                mat[x][y]='1';
                q.push(make_pair(x,y));
                counter++;
            }
        }
    }
    return counter++;
}



int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,row,column,a,b,i,length;
    cin>>test;
    while(test--)
    {
        string mat[X];
        cin>>a>>b;
        row=0;
        cin.ignore(100,'\n');
        while(1)
        {
            getline(cin,mat[row]);
            if(mat[row].empty())
            {
                break;
            }
            row++;
        }
        column=mat[0].size();
        cout<<bfs(row,column,a-1,b-1,mat)<<endl;
        if(test>0)
        {
            cout<<endl;
        }
    }
    return 0;
}
